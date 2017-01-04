package com.sleepycat.bind.serial.test;
import java.io.Serializable;
import com.sleepycat.bind.tuple.MarshalledTupleKeyEntity;
import com.sleepycat.bind.tuple.TupleInput;
import com.sleepycat.bind.tuple.TupleOutput;
@SuppressWarnings("serial")
public class MarshalledObject
implements Serializable, MarshalledTupleKeyEntity
