package com.sleepycat.je.latch;
import static com.sleepycat.je.EnvironmentFailureException.unexpectedState;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.locks.ReentrantReadWriteLock;
import com.sleepycat.je.ThreadInterruptedException;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.utilint.StatGroup;
@SuppressWarnings("serial")
public class SharedLatchImpl extends ReentrantReadWriteLock
implements SharedLatch
