package org.apache.hadoop.mapreduce.lib.input;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapreduce.InputSplit;
import org.apache.hadoop.mapreduce.RecordReader;
import org.apache.hadoop.mapreduce.TaskAttemptContext;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class CombineSequenceFileInputFormat<K,V>
extends CombineFileInputFormat<K,V>
