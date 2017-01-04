package com.sleepycat.je.log;
import java.util.Collection;
import com.sleepycat.je.cleaner.PackedObsoleteInfo;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.log.entry.LogEntry;
import com.sleepycat.je.txn.WriteLockInfo;
import com.sleepycat.je.utilint.DbLsn;
public class LogParams
