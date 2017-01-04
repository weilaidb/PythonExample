package com.sleepycat.je.log.entry;
import java.nio.ByteBuffer;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.log.VersionedWriteLoggable;
abstract class BaseReplicableEntry<T extends VersionedWriteLoggable>
extends BaseEntry<T>
implements ReplicableLogEntry
