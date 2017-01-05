package org.apache.hadoop.mapreduce.task.reduce;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.DataInputBuffer;
import org.apache.hadoop.mapred.IFile.Reader;
import org.apache.hadoop.mapreduce.TaskAttemptID;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class InMemoryReader<K, V> extends Reader<K, V>
