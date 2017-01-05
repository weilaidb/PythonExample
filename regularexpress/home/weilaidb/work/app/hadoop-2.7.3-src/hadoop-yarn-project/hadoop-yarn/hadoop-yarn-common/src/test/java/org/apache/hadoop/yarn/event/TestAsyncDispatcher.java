package org.apache.hadoop.yarn.event;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.LinkedBlockingQueue;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import org.junit.Assert;
import org.junit.Test;
import static org.mockito.Mockito.*;
public class TestAsyncDispatcher
