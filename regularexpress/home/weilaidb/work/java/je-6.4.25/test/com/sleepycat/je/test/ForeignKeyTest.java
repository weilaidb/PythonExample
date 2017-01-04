package com.sleepycat.je.test;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.util.ArrayList;
import java.util.List;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;
import com.sleepycat.je.Database;
import com.sleepycat.je.DatabaseConfig;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.DeleteConstraintException;
import com.sleepycat.je.ForeignConstraintException;
import com.sleepycat.je.ForeignKeyDeleteAction;
import com.sleepycat.je.ForeignKeyNullifier;
import com.sleepycat.je.ForeignMultiKeyNullifier;
import com.sleepycat.je.LockMode;
import com.sleepycat.je.OperationStatus;
import com.sleepycat.je.SecondaryConfig;
import com.sleepycat.je.SecondaryCursor;
import com.sleepycat.je.SecondaryDatabase;
import com.sleepycat.je.SecondaryKeyCreator;
import com.sleepycat.je.Transaction;
import com.sleepycat.je.util.TestUtils;
@RunWith(Parameterized.class)
public class ForeignKeyTest extends MultiKeyTxnTestCase
