package com.sleepycat.persist;
import java.util.Iterator;
import com.sleepycat.je.CacheMode;
import com.sleepycat.je.CursorConfig;
import com.sleepycat.je.DatabaseConfig;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.DuplicateDataException;
import com.sleepycat.je.EnvironmentFailureException ;
import com.sleepycat.je.LockMode;
import com.sleepycat.je.OperationFailureException ;
import com.sleepycat.je.Transaction;
import com.sleepycat.persist.model.Relationship;
import com.sleepycat.persist.model.SecondaryKey;
public interface EntityCursor<V> extends ForwardCursor<V>
