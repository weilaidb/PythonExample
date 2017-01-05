package org.apache.hadoop.metrics2.filter;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import com.google.common.collect.Maps;
import org.apache.commons.configuration.SubsetConfiguration;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.metrics2.MetricsException;
import org.apache.hadoop.metrics2.MetricsFilter;
import org.apache.hadoop.metrics2.MetricsTag;
@InterfaceAudience.Private
public abstract class AbstractPatternFilter extends MetricsFilter
