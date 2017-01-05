package org.apache.hadoop.hdfs.server.datanode.fsdataset.impl;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_CACHE_REVOCATION_TIMEOUT_MS;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_CACHE_REVOCATION_TIMEOUT_MS_DEFAULT;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_CACHE_REVOCATION_POLLING_MS;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_CACHE_REVOCATION_POLLING_MS_DEFAULT;
import com.google.common.base.Preconditions;
import com.google.common.util.concurrent.ThreadFactoryBuilder;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map.Entry;
import java.util.concurrent.Executor;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicLong;
import org.apache.commons.io.IOUtils;
import org.apache.commons.lang.time.DurationFormatUtils;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.ChecksumException;
import org.apache.hadoop.hdfs.ExtendedBlockId;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.protocol.BlockListAsLongs;
import org.apache.hadoop.hdfs.protocol.ExtendedBlock;
import org.apache.hadoop.hdfs.server.datanode.DatanodeUtil;
import org.apache.hadoop.io.nativeio.NativeIO;
import org.apache.hadoop.util.Time;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class FsDatasetCache
