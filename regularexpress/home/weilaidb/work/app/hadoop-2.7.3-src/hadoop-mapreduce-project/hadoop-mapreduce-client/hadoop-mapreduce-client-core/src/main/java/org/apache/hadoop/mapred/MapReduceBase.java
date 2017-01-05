package org.apache.hadoop.mapred;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Closeable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class MapReduceBase implements Closeable, JobConfigurable
