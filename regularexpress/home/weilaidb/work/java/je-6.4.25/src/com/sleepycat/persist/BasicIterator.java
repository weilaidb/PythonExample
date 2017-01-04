package com.sleepycat.persist;
import java.util.Iterator;
import java.util.NoSuchElementException;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.LockMode;
import com.sleepycat.util.RuntimeExceptionWrapper;
class BasicIterator<V> implements Iterator<V>
