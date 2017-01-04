package com.sleepycat.je.log.entry;
import java.nio.ByteBuffer;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.log.FileHeader;
import com.sleepycat.je.log.LogEntryHeader;
import com.sleepycat.je.log.LogEntryType;
public class FileHeaderEntry extends SingleItemEntry<FileHeader>
