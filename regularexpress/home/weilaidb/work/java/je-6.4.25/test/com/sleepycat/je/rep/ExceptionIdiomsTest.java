package com.sleepycat.je.rep;
import java.io.File;
import org.junit.Test;
import com.sleepycat.je.Durability;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.LockConflictException;
import com.sleepycat.je.Transaction;
import com.sleepycat.je.TransactionConfig;
import com.sleepycat.je.rep.ReplicatedEnvironment.State;
import com.sleepycat.util.test.TestBase;
public class ExceptionIdiomsTest extends TestBase
