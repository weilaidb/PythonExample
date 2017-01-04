package com.sleepycat.je.dbi;
import java.util.Iterator;
import java.util.NoSuchElementException;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentMap;
import java.util.concurrent.atomic.AtomicLong;
import com.sleepycat.je.CacheMode;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.evictor.Evictor;
import com.sleepycat.je.evictor.EvictorStatDefinition;
import com.sleepycat.je.evictor.OffHeapCache;
import com.sleepycat.je.tree.BIN;
import com.sleepycat.je.tree.IN;
import com.sleepycat.je.utilint.LongStat;
import com.sleepycat.je.utilint.StatGroup;
public class INList implements Iterable<IN>
