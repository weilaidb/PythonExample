package com.sleepycat.je.cleaner;
import java.util.Iterator;
import java.util.Map;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.dbi.EnvironmentImpl;
abstract class BaseLocalUtilizationTracker extends BaseUtilizationTracker
