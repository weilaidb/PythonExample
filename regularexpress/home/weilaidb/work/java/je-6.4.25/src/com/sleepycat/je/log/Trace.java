package com.sleepycat.je.log;
import java.nio.ByteBuffer;
import java.util.Calendar;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.log.entry.TraceLogEntry;
import com.sleepycat.je.utilint.DbLsn;
import com.sleepycat.je.utilint.Timestamp;
public class Trace extends BasicVersionedWriteLoggable
