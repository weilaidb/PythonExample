package org.apache.hadoop.ipc;
import java.util.Arrays;
import java.util.UUID;
import java.util.concurrent.locks.ReentrantLock;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.ipc.metrics.RetryCacheMetrics;
import org.apache.hadoop.util.LightWeightCache;
import org.apache.hadoop.util.LightWeightGSet;
import org.apache.hadoop.util.LightWeightGSet.LinkedElement;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public class RetryCache
