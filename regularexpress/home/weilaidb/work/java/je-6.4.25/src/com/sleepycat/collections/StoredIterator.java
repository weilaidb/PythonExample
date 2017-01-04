package com.sleepycat.collections;
import java.io.Closeable;
import java.util.Iterator;
import java.util.ListIterator;
import java.util.NoSuchElementException;
import com.sleepycat.compat.DbCompat;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.OperationFailureException;
import com.sleepycat.je.OperationStatus;
import com.sleepycat.util.RuntimeExceptionWrapper;
public class StoredIterator<E> extends BaseIterator<E>
implements ListIterator<E>, Cloneable
, Closeable
