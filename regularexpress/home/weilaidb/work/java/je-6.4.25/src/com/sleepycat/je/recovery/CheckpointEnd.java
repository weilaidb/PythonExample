package com.sleepycat.je.recovery;
import java.nio.ByteBuffer;
import java.util.Calendar;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.log.Loggable;
import com.sleepycat.je.utilint.DbLsn;
import com.sleepycat.je.utilint.Timestamp;
public class CheckpointEnd implements Loggable
