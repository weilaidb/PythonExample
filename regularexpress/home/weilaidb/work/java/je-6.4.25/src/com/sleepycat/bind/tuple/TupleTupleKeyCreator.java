package com.sleepycat.bind.tuple;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.ForeignKeyNullifier;
import com.sleepycat.je.SecondaryDatabase;
import com.sleepycat.je.SecondaryKeyCreator;
public abstract class TupleTupleKeyCreator<E> extends TupleBase<E>
implements SecondaryKeyCreator, ForeignKeyNullifier
