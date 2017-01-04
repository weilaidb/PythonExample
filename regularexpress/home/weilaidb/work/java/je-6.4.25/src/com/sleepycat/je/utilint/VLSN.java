package com.sleepycat.je.utilint;
import java.io.Serializable;
import java.nio.ByteBuffer;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.log.Loggable;
public class VLSN implements Loggable, Comparable<VLSN>, Serializable
