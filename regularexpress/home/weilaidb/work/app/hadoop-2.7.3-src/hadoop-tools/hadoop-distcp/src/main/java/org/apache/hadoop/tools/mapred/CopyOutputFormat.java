package org.apache.hadoop.tools.mapred;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.*;
import org.apache.hadoop.mapreduce.lib.output.TextOutputFormat;
import org.apache.hadoop.mapreduce.security.TokenCache;
import org.apache.hadoop.tools.DistCpConstants;
import java.io.IOException;
public class CopyOutputFormat<K, V> extends TextOutputFormat<K, V>
