package com.sleepycat.je.cleaner;
import java.nio.ByteBuffer;
import java.util.Arrays;
import com.sleepycat.je.dbi.MemoryBudget;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.log.Loggable;
public class PackedOffsets implements Loggable
