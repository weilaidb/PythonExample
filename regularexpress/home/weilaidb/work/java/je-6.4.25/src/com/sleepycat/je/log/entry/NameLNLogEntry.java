package com.sleepycat.je.log.entry;
import java.nio.ByteBuffer;
import com.sleepycat.je.dbi.DatabaseId;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.dbi.ReplicatedDatabaseConfig;
import com.sleepycat.je.log.DbOpReplicationContext;
import com.sleepycat.je.log.LogEntryHeader;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.log.ReplicationContext;
import com.sleepycat.je.tree.NameLN;
import com.sleepycat.je.txn.Txn;
import com.sleepycat.je.utilint.VLSN;
public class NameLNLogEntry extends LNLogEntry<NameLN>
