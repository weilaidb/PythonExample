package com.sleepycat.je;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.fail;
import java.io.File;
import java.io.IOException;
import java.util.concurrent.CountDownLatch;
import com.sleepycat.bind.tuple.IntegerBinding;
import com.sleepycat.je.txn.LockManager;
import com.sleepycat.je.util.DualTestCase;
import com.sleepycat.je.util.TestUtils;
import com.sleepycat.je.utilint.TestHook;
import com.sleepycat.util.test.SharedTestUtils;
import org.junit.After;
import org.junit.Test;
public class ReadCommittedTest extends DualTestCase
