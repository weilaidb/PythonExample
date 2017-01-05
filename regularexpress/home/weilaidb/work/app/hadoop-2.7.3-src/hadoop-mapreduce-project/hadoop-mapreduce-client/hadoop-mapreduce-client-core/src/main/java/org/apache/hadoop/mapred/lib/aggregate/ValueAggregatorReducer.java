package org.apache.hadoop.mapred.lib.aggregate;
import java.io.IOException;
import java.util.Iterator;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.Reporter;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class ValueAggregatorReducer<K1 extends WritableComparable,
V1 extends Writable>
extends ValueAggregatorJobBase<K1, V1>
