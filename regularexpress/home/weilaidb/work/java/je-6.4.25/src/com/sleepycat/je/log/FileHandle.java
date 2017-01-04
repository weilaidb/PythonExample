package com.sleepycat.je.log;
import java.io.IOException;
import java.io.RandomAccessFile;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.latch.Latch;
import com.sleepycat.je.latch.LatchFactory;
public class FileHandle
