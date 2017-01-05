package org.apache.hadoop.mapred;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.BytesWritable;
import org.apache.hadoop.io.DataOutputBuffer;
import org.apache.hadoop.io.SequenceFile;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class SequenceFileAsBinaryInputFormat
extends SequenceFileInputFormat<BytesWritable,BytesWritable>
