package com.sleepycat.je.log.entry;
import java.nio.ByteBuffer;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.dbi.DupKeyData;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.log.LogEntryHeader;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.tree.Key;
import com.sleepycat.je.tree.LN;
public class DeletedDupLNLogEntry extends LNLogEntry<LN>
