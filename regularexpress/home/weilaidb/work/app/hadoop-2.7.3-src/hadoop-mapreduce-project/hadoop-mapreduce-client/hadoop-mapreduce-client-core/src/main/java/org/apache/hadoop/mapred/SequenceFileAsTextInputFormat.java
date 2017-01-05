package org.apache.hadoop.mapred;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class SequenceFileAsTextInputFormat
extends SequenceFileInputFormat<Text, Text>
