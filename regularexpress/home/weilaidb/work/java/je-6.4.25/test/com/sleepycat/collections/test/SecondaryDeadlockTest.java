package com.sleepycat.collections.test;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import com.sleepycat.collections.StoredSortedMap;
import com.sleepycat.collections.TransactionRunner;
import com.sleepycat.collections.TransactionWorker;
import com.sleepycat.je.Database;
import com.sleepycat.je.Environment;
import com.sleepycat.je.LockConflictException;
import com.sleepycat.je.TransactionConfig;
import com.sleepycat.util.ExceptionUnwrapper;
import com.sleepycat.util.test.TestBase;
import com.sleepycat.util.test.TestEnv;
public class SecondaryDeadlockTest extends TestBase
