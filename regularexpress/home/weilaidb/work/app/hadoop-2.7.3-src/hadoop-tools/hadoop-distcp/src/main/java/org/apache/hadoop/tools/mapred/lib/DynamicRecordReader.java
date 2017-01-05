package org.apache.hadoop.tools.mapred.lib;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.tools.util.DistCpUtils;
import org.apache.hadoop.tools.DistCpConstants;
import org.apache.hadoop.mapreduce.*;
import org.apache.hadoop.conf.Configuration;
import java.io.IOException;
import java.util.concurrent.TimeUnit;
public class DynamicRecordReader<K, V> extends RecordReader<K, V>
