package com.sleepycat.persist;
import java.util.Map;
import java.util.SortedMap;
import com.sleepycat.collections.StoredMap;
import com.sleepycat.collections.StoredSortedMap;
import com.sleepycat.je.CursorConfig;
import com.sleepycat.je.Database;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.Environment;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.EnvironmentFailureException ;
import com.sleepycat.je.LockMode;
import com.sleepycat.je.OperationFailureException ;
import com.sleepycat.je.SecondaryDatabase;
import com.sleepycat.je.Transaction;
public interface EntityIndex<K, V>
