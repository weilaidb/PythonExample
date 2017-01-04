package com.sleepycat.persist;
import java.util.Iterator;
import com.sleepycat.je.CacheMode;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.LockMode;
import com.sleepycat.je.OperationStatus;
import com.sleepycat.util.keyrange.RangeCursor;
class BasicCursor<V> implements EntityCursor<V>
