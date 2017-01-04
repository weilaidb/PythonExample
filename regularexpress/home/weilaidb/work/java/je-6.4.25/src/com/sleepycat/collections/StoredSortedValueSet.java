package com.sleepycat.collections;
import java.util.Comparator;
import java.util.SortedSet;
import com.sleepycat.bind.EntityBinding;
import com.sleepycat.je.Database;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.OperationFailureException;
import com.sleepycat.util.RuntimeExceptionWrapper;
public class StoredSortedValueSet<E>
extends StoredValueSet<E>
implements SortedSet<E>
