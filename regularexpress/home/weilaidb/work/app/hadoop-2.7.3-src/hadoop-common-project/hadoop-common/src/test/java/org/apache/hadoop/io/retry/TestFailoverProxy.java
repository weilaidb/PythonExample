package org.apache.hadoop.io.retry;
import static org.junit.Assert.*;
import java.io.IOException;
import java.util.concurrent.CountDownLatch;
import org.apache.hadoop.io.retry.UnreliableImplementation.TypeOfExceptionToFailWith;
import org.apache.hadoop.io.retry.UnreliableInterface.UnreliableException;
import org.apache.hadoop.ipc.StandbyException;
import org.apache.hadoop.util.ThreadUtil;
import org.junit.Test;
public class TestFailoverProxy
