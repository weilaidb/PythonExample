package com.sleepycat.je.rep.utilint;
import java.util.concurrent.CountDownLatch;
import com.sleepycat.je.rep.ReplicatedEnvironment;
import com.sleepycat.je.rep.StateChangeEvent;
import com.sleepycat.je.rep.StateChangeListener;
public class WaitForMasterListener implements StateChangeListener
