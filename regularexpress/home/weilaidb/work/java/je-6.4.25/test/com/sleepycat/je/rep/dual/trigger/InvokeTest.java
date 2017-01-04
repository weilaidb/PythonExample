package com.sleepycat.je.rep.dual.trigger;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import org.junit.Before;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.Transaction;
import com.sleepycat.je.TransactionConfig;
import com.sleepycat.je.rep.util.RepEnvWrapper;
import com.sleepycat.je.rep.utilint.RepTestUtils;
import com.sleepycat.je.trigger.ReplicatedDatabaseTrigger;
import com.sleepycat.je.trigger.TestBase;
import com.sleepycat.je.trigger.Trigger;
public class InvokeTest extends com.sleepycat.je.trigger.InvokeTest
