package com.sleepycat.je.evictor;
import static com.sleepycat.je.EnvironmentFailureException.unexpectedState;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.ALLOC_FAILURE;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.ALLOC_OVERFLOW;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.BINS_LOADED;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.BINS_STORED;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.CACHED_BINS;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.CACHED_BIN_DELTAS;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.CACHED_LNS;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.CRITICAL_NODES_TARGETED;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.DIRTY_NODES_EVICTED;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.GROUP_DESC;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.GROUP_NAME;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.LNS_EVICTED;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.LNS_LOADED;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.LNS_STORED;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.LRU_SIZE;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.NODES_EVICTED;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.NODES_MUTATED;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.NODES_SKIPPED;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.NODES_STRIPPED;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.NODES_TARGETED;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.THREAD_UNAVAILABLE;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.TOTAL_BLOCKS;
import static com.sleepycat.je.evictor.OffHeapStatDefinition.TOTAL_BYTES;
import java.nio.ByteBuffer;
import java.util.Arrays;
import java.util.Map;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.RejectedExecutionHandler;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicLong;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.zip.Checksum;
import com.sleepycat.je.CacheMode;
import com.sleepycat.je.EnvironmentMutableConfig;
import com.sleepycat.je.StatsConfig;
import com.sleepycat.je.config.EnvironmentParams;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.dbi.DbConfigManager;
import com.sleepycat.je.dbi.EnvConfigObserver;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.dbi.MemoryBudget;
import com.sleepycat.je.evictor.Evictor.EvictionSource;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.log.Provisional;
import com.sleepycat.je.log.entry.BINDeltaLogEntry;
import com.sleepycat.je.log.entry.INLogEntry;
import com.sleepycat.je.tree.BIN;
import com.sleepycat.je.tree.IN;
import com.sleepycat.je.tree.LN;
import com.sleepycat.je.utilint.Adler32;
import com.sleepycat.je.utilint.DbLsn;
import com.sleepycat.je.utilint.IntStat;
import com.sleepycat.je.utilint.LoggerUtils;
import com.sleepycat.je.utilint.LongStat;
import com.sleepycat.je.utilint.Pair;
import com.sleepycat.je.utilint.StatGroup;
import com.sleepycat.je.utilint.StoppableThreadFactory;
import com.sleepycat.je.utilint.VLSN;
public class OffHeapCache implements EnvConfigObserver
