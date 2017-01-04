package com.sleepycat.je.log;
import java.io.RandomAccessFile;
import java.nio.ByteBuffer;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.dbi.EnvironmentImpl;
class FileSource implements LogSource
