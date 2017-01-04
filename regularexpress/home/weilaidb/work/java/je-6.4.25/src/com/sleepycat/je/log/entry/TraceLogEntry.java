package com.sleepycat.je.log.entry;
import java.nio.ByteBuffer;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.log.Loggable;
import com.sleepycat.je.log.Trace;
public class TraceLogEntry extends SingleItemReplicableEntry<Trace>
