package com.sleepycat.collections;
import java.util.Map;
import java.util.Set;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.OperationFailureException;
import com.sleepycat.je.OperationStatus;
import com.sleepycat.util.RuntimeExceptionWrapper;
public class StoredEntrySet<K, V>
extends StoredCollection<Map.Entry<K, V>>
implements Set<Map.Entry<K, V>>
