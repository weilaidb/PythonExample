package org.apache.hadoop.mapred.lib;
import java.io.*;
import java.lang.reflect.*;
import org.apache.hadoop.mapred.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class CombineFileRecordReader<K, V> implements RecordReader<K, V>
