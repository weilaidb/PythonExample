package com.sleepycat.je.rep.utilint;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import com.sleepycat.je.rep.StateChangeEvent;
import com.sleepycat.je.rep.StateChangeListener;
public class WaitForDetachedListener implements StateChangeListener
