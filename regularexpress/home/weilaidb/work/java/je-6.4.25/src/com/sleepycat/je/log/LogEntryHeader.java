package com.sleepycat.je.log;
import java.nio.ByteBuffer;
import java.util.zip.Checksum;
import com.sleepycat.je.log.entry.LogEntry;
import com.sleepycat.je.utilint.Adler32;
import com.sleepycat.je.utilint.VLSN;
public class LogEntryHeader
