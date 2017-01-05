package org.apache.hadoop.yarn.util;
import java.lang.reflect.Constructor;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
@Public
@Evolving
public abstract class ResourceCalculatorProcessTree extends Configured
