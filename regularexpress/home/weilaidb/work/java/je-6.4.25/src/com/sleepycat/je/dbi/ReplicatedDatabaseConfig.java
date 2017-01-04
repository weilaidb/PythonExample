package com.sleepycat.je.dbi;
import java.nio.ByteBuffer;
import java.util.Arrays;
import com.sleepycat.je.DatabaseConfig;
import com.sleepycat.je.log.BasicVersionedWriteLoggable;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.log.Loggable;
import com.sleepycat.je.log.VersionedWriteLoggable;
public class ReplicatedDatabaseConfig extends BasicVersionedWriteLoggable
