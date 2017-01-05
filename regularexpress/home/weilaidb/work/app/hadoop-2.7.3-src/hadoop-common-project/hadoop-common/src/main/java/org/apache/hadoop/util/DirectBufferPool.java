package org.apache.hadoop.util;
import java.lang.ref.WeakReference;
import java.nio.ByteBuffer;
import java.util.Queue;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.ConcurrentMap;
import org.apache.hadoop.classification.InterfaceAudience;
import com.google.common.annotations.VisibleForTesting;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class DirectBufferPool
