package com.sleepycat.je.log.entry;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.txn.TxnAbort;
public class AbortLogEntry extends SingleItemReplicableEntry<TxnAbort>
