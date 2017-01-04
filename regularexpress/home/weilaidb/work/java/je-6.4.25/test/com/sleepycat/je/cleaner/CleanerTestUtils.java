package com.sleepycat.je.cleaner;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.assertNotNull;
import com.sleepycat.je.Cursor;
import com.sleepycat.je.DbTestProxy;
import com.sleepycat.je.dbi.CursorImpl;
import com.sleepycat.je.tree.BIN;
import com.sleepycat.je.utilint.DbLsn;
public class CleanerTestUtils
