package com.sleepycat.je.rep.vlsn;
import java.lang.ref.SoftReference;
import java.util.concurrent.atomic.AtomicReference;
import com.sleepycat.je.log.LogItem;
import com.sleepycat.je.utilint.LongStat;
import com.sleepycat.je.utilint.StatGroup;
import com.sleepycat.je.utilint.VLSN;
class LogItemCache
