package org.apache.hadoop.ha;
import java.util.List;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.util.ReflectionUtils;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.Lists;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class NodeFencer
