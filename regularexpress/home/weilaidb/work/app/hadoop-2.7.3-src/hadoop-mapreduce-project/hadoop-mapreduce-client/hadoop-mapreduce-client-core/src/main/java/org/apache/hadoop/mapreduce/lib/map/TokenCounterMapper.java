package org.apache.hadoop.mapreduce.lib.map;
import java.io.IOException;
import java.util.StringTokenizer;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Mapper;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class TokenCounterMapper extends Mapper<Object, Text, Text, IntWritable>
