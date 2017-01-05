package org.apache.hadoop.util;
import java.util.Comparator;
import java.util.Iterator;
import java.util.PriorityQueue;
import org.apache.hadoop.HadoopIllegalArgumentException;
import org.apache.hadoop.classification.InterfaceAudience;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public class LightWeightCache<K, E extends K> extends LightWeightGSet<K, E>
