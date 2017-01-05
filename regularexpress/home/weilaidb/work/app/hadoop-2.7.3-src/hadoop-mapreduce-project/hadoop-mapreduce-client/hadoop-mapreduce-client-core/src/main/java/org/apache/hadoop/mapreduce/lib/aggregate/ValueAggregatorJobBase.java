package org.apache.hadoop.mapreduce.lib.aggregate;
import java.util.ArrayList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class ValueAggregatorJobBase<K1 extends WritableComparable<?>,
V1 extends Writable>
