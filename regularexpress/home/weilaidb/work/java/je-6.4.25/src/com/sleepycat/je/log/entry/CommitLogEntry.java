package com.sleepycat.je.log.entry;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.txn.TxnCommit;
public class CommitLogEntry extends SingleItemReplicableEntry<TxnCommit>
