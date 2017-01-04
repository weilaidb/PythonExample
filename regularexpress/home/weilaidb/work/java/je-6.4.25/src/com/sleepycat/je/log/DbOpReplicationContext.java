package com.sleepycat.je.log;
import com.sleepycat.je.dbi.DatabaseId;
import com.sleepycat.je.dbi.ReplicatedDatabaseConfig;
import com.sleepycat.je.log.entry.DbOperationType;
import com.sleepycat.je.log.entry.NameLNLogEntry;
import com.sleepycat.je.utilint.VLSN;
public class DbOpReplicationContext extends ReplicationContext
