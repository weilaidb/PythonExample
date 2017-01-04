package com.sleepycat.je.cleaner;
import java.util.IdentityHashMap;
import java.util.Set;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.log.LogEntryType;
public class LocalUtilizationTracker extends BaseLocalUtilizationTracker
