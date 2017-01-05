package org.apache.hadoop.mapred.lib.db;
import java.io.IOException;
import java.sql.Connection;
import java.sql.SQLException;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.mapred.InputFormat;
import org.apache.hadoop.mapred.InputSplit;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.JobConfigurable;
import org.apache.hadoop.mapred.RecordReader;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapreduce.Job;
@InterfaceAudience.Public
@InterfaceStability.Stable
@SuppressWarnings("deprecation")
public class DBInputFormat<T  extends DBWritable>
extends org.apache.hadoop.mapreduce.lib.db.DBInputFormat<T>
implements InputFormat<LongWritable, T>, JobConfigurable
