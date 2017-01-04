package com.sleepycat.bind.serial;
import com.sleepycat.bind.tuple.TupleBase;
import com.sleepycat.bind.tuple.TupleInput;
import com.sleepycat.bind.tuple.TupleOutput;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.ForeignKeyNullifier;
import com.sleepycat.je.SecondaryDatabase;
import com.sleepycat.je.SecondaryKeyCreator;
public abstract class TupleSerialKeyCreator<D> extends TupleBase
implements SecondaryKeyCreator, ForeignKeyNullifier
