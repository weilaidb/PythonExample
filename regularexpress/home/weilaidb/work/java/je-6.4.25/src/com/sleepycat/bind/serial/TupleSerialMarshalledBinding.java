package com.sleepycat.bind.serial;
import com.sleepycat.bind.tuple.MarshalledTupleKeyEntity;
import com.sleepycat.bind.tuple.TupleInput;
import com.sleepycat.bind.tuple.TupleOutput;
public class TupleSerialMarshalledBinding<E extends MarshalledTupleKeyEntity>
extends TupleSerialBinding<E,E>
