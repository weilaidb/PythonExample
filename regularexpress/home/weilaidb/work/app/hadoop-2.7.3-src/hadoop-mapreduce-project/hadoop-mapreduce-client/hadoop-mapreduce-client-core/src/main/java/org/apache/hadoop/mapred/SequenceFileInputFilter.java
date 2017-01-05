package org.apache.hadoop.mapred;
import java.io.IOException;
import java.util.regex.PatternSyntaxException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.util.ReflectionUtils;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class SequenceFileInputFilter<K, V>
extends SequenceFileInputFormat<K, V>
