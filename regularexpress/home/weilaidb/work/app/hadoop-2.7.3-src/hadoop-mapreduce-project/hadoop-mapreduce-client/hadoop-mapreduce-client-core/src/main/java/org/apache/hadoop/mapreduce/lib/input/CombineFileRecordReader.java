package org.apache.hadoop.mapreduce.lib.input;
import java.io.*;
import java.lang.reflect.*;
import org.apache.hadoop.mapreduce.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class CombineFileRecordReader<K, V> extends RecordReader<K, V>
