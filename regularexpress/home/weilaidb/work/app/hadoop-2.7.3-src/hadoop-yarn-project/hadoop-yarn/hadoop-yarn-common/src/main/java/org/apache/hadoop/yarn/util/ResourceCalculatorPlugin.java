package org.apache.hadoop.yarn.util;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.util.Shell;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public abstract class ResourceCalculatorPlugin extends Configured
