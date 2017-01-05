package org.apache.hadoop.mapred.lib;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapred.InputFormat;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Mapper;
import org.apache.hadoop.util.ReflectionUtils;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class MultipleInputs
