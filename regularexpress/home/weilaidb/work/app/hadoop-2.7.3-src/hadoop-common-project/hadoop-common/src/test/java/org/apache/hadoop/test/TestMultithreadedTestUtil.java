package org.apache.hadoop.test;
import static org.junit.Assert.*;
import java.io.IOException;
import java.util.concurrent.atomic.AtomicInteger;
import org.junit.Test;
import org.apache.hadoop.test.MultithreadedTestUtil.TestContext;
import org.apache.hadoop.test.MultithreadedTestUtil.TestingThread;
import org.apache.hadoop.test.MultithreadedTestUtil.RepeatingTestThread;
import org.apache.hadoop.util.Time;
public class TestMultithreadedTestUtil
