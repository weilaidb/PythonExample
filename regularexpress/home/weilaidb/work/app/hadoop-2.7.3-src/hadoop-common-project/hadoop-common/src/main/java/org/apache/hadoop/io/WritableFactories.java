package org.apache.hadoop.io;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.*;
import org.apache.hadoop.util.ReflectionUtils;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class WritableFactories
