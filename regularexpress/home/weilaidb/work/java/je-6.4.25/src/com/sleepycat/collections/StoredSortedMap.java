package com.sleepycat.collections;
import java.util.Comparator;
import java.util.SortedMap;
import com.sleepycat.bind.EntityBinding;
import com.sleepycat.bind.EntryBinding;
import com.sleepycat.je.Database;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.OperationFailureException;
import com.sleepycat.je.OperationStatus;
import com.sleepycat.util.RuntimeExceptionWrapper;
public class StoredSortedMap<K, V>
extends StoredMap<K, V>
implements SortedMap<K, V>
