package org.apache.hadoop.mapred;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Stable
public interface MapRunnable<K1, V1, K2, V2>
extends JobConfigurable
