package org.apache.hadoop.net.unix;
import java.io.Closeable;
import java.io.EOFException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.io.IOUtils;
import java.io.IOException;
import java.nio.channels.ClosedChannelException;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.TreeMap;
import java.util.Map;
import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.ReentrantLock;
import org.apache.commons.lang.SystemUtils;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.util.NativeCodeLoader;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
import com.google.common.util.concurrent.Uninterruptibles;
@InterfaceAudience.LimitedPrivate("HDFS")
public final class DomainSocketWatcher implements Closeable
