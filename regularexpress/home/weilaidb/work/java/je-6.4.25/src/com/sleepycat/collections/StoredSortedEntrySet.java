package com.sleepycat.collections;
import java.util.Comparator;
import java.util.Map;
import java.util.SortedSet;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.OperationFailureException;
import com.sleepycat.util.RuntimeExceptionWrapper;
public class StoredSortedEntrySet<K, V>
extends StoredEntrySet<K, V>
implements SortedSet<Map.Entry<K, V>>
