package com.sleepycat.je.test;
import java.util.Set;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.SecondaryDatabase;
import com.sleepycat.je.SecondaryKeyCreator;
import com.sleepycat.je.SecondaryMultiKeyCreator;
import com.sleepycat.util.test.TxnTestCase;
public abstract class MultiKeyTxnTestCase extends TxnTestCase
