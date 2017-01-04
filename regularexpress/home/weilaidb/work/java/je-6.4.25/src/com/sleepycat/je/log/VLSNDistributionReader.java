package com.sleepycat.je.log;
import java.nio.ByteBuffer;
import java.util.HashMap;
import java.util.Map;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.utilint.VLSN;
public class VLSNDistributionReader extends DumpFileReader
