package com.sleepycat.je.log;
import java.io.FileNotFoundException;
import java.nio.ByteBuffer;
import java.util.HashSet;
import java.util.Set;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.dbi.EnvironmentFailureReason;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.log.entry.LogEntry;
import com.sleepycat.je.utilint.DbLsn;
abstract public class ScavengerFileReader extends FileReader
