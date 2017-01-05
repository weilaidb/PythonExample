package org.apache.hadoop.mapred.lib.aggregate;
import java.io.IOException;
import java.util.ArrayList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Mapper;
import org.apache.hadoop.mapred.Reducer;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class ValueAggregatorJobBase<K1 extends WritableComparable,
V1 extends Writable>
implements Mapper<K1, V1, Text, Text>, Reducer<Text, Text, Text, Text>
