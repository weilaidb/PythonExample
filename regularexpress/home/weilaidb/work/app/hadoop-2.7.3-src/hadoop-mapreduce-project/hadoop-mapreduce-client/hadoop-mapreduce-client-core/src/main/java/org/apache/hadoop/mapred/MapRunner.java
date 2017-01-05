package org.apache.hadoop.mapred;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.util.ReflectionUtils;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class MapRunner<K1, V1, K2, V2>
implements MapRunnable<K1, V1, K2, V2>
