package com.sleepycat.persist;
import java.io.Closeable;
import java.util.Iterator;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.EnvironmentFailureException ;
import com.sleepycat.je.LockMode;
import com.sleepycat.je.OperationFailureException ;
public interface ForwardCursor<V> extends Iterable<V>
, Closeable
