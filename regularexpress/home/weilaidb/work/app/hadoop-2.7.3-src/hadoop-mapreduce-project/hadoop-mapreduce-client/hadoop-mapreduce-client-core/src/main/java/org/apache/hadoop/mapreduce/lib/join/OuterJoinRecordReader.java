package org.apache.hadoop.mapreduce.lib.join;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.io.WritableComparator;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class OuterJoinRecordReader<K extends WritableComparable<?>>
extends JoinRecordReader<K>
