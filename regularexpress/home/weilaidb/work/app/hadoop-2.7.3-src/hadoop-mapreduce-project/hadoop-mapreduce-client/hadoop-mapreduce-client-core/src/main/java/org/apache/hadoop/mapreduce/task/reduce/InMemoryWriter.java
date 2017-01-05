package org.apache.hadoop.mapreduce.task.reduce;
import java.io.DataOutputStream;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.BoundedByteArrayOutputStream;
import org.apache.hadoop.io.DataInputBuffer;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.mapred.IFile;
import org.apache.hadoop.mapred.IFileOutputStream;
import org.apache.hadoop.mapred.IFile.Writer;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class InMemoryWriter<K, V> extends Writer<K, V>
