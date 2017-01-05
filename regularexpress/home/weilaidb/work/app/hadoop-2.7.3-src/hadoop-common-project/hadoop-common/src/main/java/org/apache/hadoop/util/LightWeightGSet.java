package org.apache.hadoop.util;
import java.io.PrintStream;
import java.util.ConcurrentModificationException;
import java.util.Iterator;
import org.apache.hadoop.HadoopIllegalArgumentException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.util.StringUtils;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.Private
public class LightWeightGSet<K, E extends K> implements GSet<K, E>
