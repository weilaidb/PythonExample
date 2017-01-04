package com.sleepycat.je.log.entry;
import java.nio.ByteBuffer;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.log.VersionedWriteLoggable;
abstract class SingleItemReplicableEntry<T extends VersionedWriteLoggable>
extends SingleItemEntry<T> implements ReplicableLogEntry
