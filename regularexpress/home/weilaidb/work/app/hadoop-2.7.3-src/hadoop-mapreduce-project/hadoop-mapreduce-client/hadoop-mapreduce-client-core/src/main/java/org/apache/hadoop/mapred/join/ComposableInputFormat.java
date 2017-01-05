package org.apache.hadoop.mapred.join;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.mapred.InputFormat;
import org.apache.hadoop.mapred.InputSplit;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Reporter;
@InterfaceAudience.Public
@InterfaceStability.Stable
public interface ComposableInputFormat<K extends WritableComparable,
V extends Writable>
extends InputFormat<K,V>
