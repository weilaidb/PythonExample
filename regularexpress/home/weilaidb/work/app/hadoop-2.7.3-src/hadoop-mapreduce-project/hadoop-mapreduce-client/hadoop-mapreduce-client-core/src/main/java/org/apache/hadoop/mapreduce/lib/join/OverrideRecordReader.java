package org.apache.hadoop.mapreduce.lib.join;
import java.io.IOException;
import java.util.ArrayList;
import java.util.PriorityQueue;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.NullWritable;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.io.WritableComparator;
import org.apache.hadoop.util.ReflectionUtils;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class OverrideRecordReader<K extends WritableComparable<?>,
V extends Writable>
extends MultiFilterRecordReader<K,V>
