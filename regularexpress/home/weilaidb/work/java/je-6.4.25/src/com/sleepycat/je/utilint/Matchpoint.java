package com.sleepycat.je.utilint;
import java.nio.ByteBuffer;
import com.sleepycat.je.log.BasicVersionedWriteLoggable;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.log.Loggable;
import com.sleepycat.je.log.VersionedWriteLoggable;
import com.sleepycat.je.utilint.Timestamp;
public class Matchpoint extends BasicVersionedWriteLoggable
