package com.sleepycat.collections;
import java.util.ListIterator;
import java.util.NoSuchElementException;
import com.sleepycat.compat.DbCompat;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.OperationStatus;
import com.sleepycat.util.keyrange.KeyRange;
class BlockIterator<E> extends BaseIterator<E>
