package com.sleepycat.je.log.entry;
import java.nio.ByteBuffer;
import com.sleepycat.je.dbi.DatabaseId;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.log.LogEntryHeader;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.log.Loggable;
public class SingleItemEntry<T extends Loggable> extends BaseEntry<T>
implements LogEntry
