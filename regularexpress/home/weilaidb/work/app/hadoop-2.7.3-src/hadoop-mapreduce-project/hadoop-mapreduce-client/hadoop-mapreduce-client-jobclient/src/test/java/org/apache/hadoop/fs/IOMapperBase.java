package org.apache.hadoop.fs;
import java.io.Closeable;
import java.io.IOException;
import java.net.InetAddress;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.*;
public abstract class IOMapperBase<T> extends Configured
implements Mapper<Text, LongWritable, Text, Text>
