package org.apache.hadoop.mapreduce.task.reduce;
import java.io.InputStream;
import java.io.IOException;
import java.util.Comparator;
import java.util.concurrent.atomic.AtomicInteger;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapreduce.TaskAttemptID;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public abstract class MapOutput<K, V>
