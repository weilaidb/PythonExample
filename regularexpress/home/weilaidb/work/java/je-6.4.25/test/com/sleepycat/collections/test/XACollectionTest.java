package com.sleepycat.collections.test;
import java.io.File;
import java.util.ArrayList;
import java.util.List;
import javax.transaction.xa.XAResource;
import org.junit.runners.Parameterized.Parameters;
import com.sleepycat.collections.TransactionRunner;
import com.sleepycat.collections.TransactionWorker;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.Environment;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.LockConflictException;
import com.sleepycat.je.XAEnvironment;
import com.sleepycat.je.log.LogUtils.XidImpl;
import com.sleepycat.util.ExceptionUnwrapper;
import com.sleepycat.util.test.TestEnv;
import com.sleepycat.utilint.StringUtils;
public class XACollectionTest extends CollectionTest
