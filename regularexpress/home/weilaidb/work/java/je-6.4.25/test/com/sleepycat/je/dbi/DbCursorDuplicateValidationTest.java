package com.sleepycat.je.dbi;
import static org.junit.Assert.assertFalse;
import java.util.Enumeration;
import java.util.Hashtable;
import org.junit.Test;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.DbTestProxy;
import com.sleepycat.je.tree.BIN;
public class DbCursorDuplicateValidationTest extends DbCursorTestBase
