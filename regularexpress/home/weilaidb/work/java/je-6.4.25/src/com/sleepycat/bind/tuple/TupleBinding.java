package com.sleepycat.bind.tuple;
import java.util.HashMap;
import java.util.Map;
import com.sleepycat.bind.EntryBinding;
import com.sleepycat.je.DatabaseEntry;
public abstract class TupleBinding<E>
extends TupleBase<E>
implements EntryBinding<E>
