package com.sleepycat.je.log.entry;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.log.LogEntryHeader;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.log.Loggable;
import com.sleepycat.je.utilint.VLSN;
abstract class BaseEntry<T extends Loggable> implements LogEntry
