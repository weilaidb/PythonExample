package org.apache.hadoop.util;
import java.nio.channels.AsynchronousCloseException;
import java.nio.channels.ClosedChannelException;
import java.util.concurrent.atomic.AtomicInteger;
import com.google.common.base.Preconditions;
public class CloseableReferenceCount
