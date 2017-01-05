package org.apache.hadoop.metrics2.impl;
import java.util.ConcurrentModificationException;
import java.util.concurrent.CountDownLatch;
import org.junit.Test;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import static org.apache.hadoop.metrics2.impl.SinkQueue.*;
public class TestSinkQueue
