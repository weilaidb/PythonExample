package org.apache.hadoop.mapred.lib;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapred.InputSplit;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.RecordReader;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.SequenceFileInputFormat;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class CombineSequenceFileInputFormat<K,V>
extends CombineFileInputFormat<K,V>
