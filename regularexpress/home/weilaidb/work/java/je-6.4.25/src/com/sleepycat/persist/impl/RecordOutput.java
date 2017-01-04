package com.sleepycat.persist.impl;
import java.util.IdentityHashMap;
import java.util.Map;
import com.sleepycat.bind.tuple.TupleOutput;
import com.sleepycat.persist.raw.RawObject;
class RecordOutput extends TupleOutput implements EntityOutput
