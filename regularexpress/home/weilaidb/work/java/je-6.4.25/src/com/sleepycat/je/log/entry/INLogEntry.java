package com.sleepycat.je.log.entry;
import static com.sleepycat.je.EnvironmentFailureException.unexpectedState;
import java.nio.ByteBuffer;
import com.sleepycat.je.dbi.DatabaseId;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.log.LogEntryHeader;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.tree.IN;
import com.sleepycat.je.utilint.DbLsn;
public class INLogEntry<T extends IN> extends BaseEntry<T>
implements LogEntry, INContainingEntry
