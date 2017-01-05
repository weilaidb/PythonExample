package org.apache.hadoop.mapreduce.lib.map;
import java.io.IOException;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Mapper;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class RegexMapper<K> extends Mapper<K, Text, Text, LongWritable>
