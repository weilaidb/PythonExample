package com.sleepycat.je.rep.impl.node;
import java.io.Serializable;
import java.nio.ByteBuffer;
import com.sleepycat.bind.tuple.TupleInput;
import com.sleepycat.bind.tuple.TupleOutput;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.rep.utilint.BinaryProtocol;
public class NameIdPair implements Serializable
