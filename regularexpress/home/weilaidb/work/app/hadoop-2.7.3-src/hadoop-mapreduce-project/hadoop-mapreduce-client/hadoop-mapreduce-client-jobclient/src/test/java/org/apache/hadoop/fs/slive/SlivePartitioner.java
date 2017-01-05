package org.apache.hadoop.fs.slive;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Partitioner;
public class SlivePartitioner implements Partitioner<Text, Text>
