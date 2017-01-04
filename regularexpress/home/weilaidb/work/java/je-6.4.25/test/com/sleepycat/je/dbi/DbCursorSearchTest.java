package com.sleepycat.je.dbi;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import java.util.Enumeration;
import java.util.Hashtable;
import java.util.Iterator;
import java.util.Map;
import org.junit.Test;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.LockMode;
import com.sleepycat.je.OperationStatus;
import com.sleepycat.je.util.StringDbt;
import com.sleepycat.utilint.StringUtils;
public class DbCursorSearchTest extends DbCursorTestBase
