package com.sleepycat.collections;
import java.util.Comparator;
import java.util.SortedSet;
import com.sleepycat.bind.EntryBinding;
import com.sleepycat.je.Database;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.OperationFailureException;
import com.sleepycat.util.RuntimeExceptionWrapper;
public class StoredSortedKeySet<K>
extends StoredKeySet<K>
implements SortedSet<K>
