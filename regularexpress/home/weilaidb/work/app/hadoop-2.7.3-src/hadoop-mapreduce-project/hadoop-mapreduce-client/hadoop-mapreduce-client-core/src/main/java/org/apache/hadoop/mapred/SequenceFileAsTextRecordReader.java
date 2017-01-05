package org.apache.hadoop.mapred;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class SequenceFileAsTextRecordReader
implements RecordReader<Text, Text>
