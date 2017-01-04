package com.sleepycat.je.cleaner;
import java.nio.ByteBuffer;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.log.Loggable;
import com.sleepycat.je.log.entry.LNLogEntry;
public class FileSummary implements Loggable, Cloneable
