package org.apache.hadoop.hdfs.util;
import java.util.HashMap;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.collect.ImmutableList;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class ReferenceCountMap<E extends ReferenceCountMap.ReferenceCounter>
