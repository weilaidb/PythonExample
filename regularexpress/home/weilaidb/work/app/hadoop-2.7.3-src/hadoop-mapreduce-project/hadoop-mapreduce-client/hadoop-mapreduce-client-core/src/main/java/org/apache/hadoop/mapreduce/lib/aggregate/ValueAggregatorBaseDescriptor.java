package org.apache.hadoop.mapreduce.lib.aggregate;
import java.util.ArrayList;
import java.util.Map.Entry;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.MRJobConfig;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class ValueAggregatorBaseDescriptor
implements ValueAggregatorDescriptor
