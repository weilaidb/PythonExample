package com.sleepycat.bind.serial;
import com.sleepycat.bind.EntityBinding;
import com.sleepycat.bind.tuple.TupleBase;
import com.sleepycat.bind.tuple.TupleInput;
import com.sleepycat.bind.tuple.TupleOutput;
import com.sleepycat.je.DatabaseEntry;
public abstract class TupleSerialBinding<D,E> extends TupleBase
implements EntityBinding<E>
