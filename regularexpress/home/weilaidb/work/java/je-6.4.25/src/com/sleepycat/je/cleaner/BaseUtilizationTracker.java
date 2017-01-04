package com.sleepycat.je.cleaner;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.utilint.DbLsn;
public abstract class BaseUtilizationTracker
