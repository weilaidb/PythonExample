package com.sleepycat.je.tree.dupConvert;
import java.nio.ByteBuffer;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.dbi.MemoryBudget;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.log.Loggable;
import com.sleepycat.je.tree.BIN;
import com.sleepycat.je.tree.IN;
import com.sleepycat.je.tree.Key;
import com.sleepycat.je.tree.TreeUtils;
import com.sleepycat.je.utilint.SizeofMarker;
public final class DBIN extends BIN implements Loggable
