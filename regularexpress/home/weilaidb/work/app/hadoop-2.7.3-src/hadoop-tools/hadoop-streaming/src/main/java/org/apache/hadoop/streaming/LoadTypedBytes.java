package org.apache.hadoop.streaming;
import java.io.DataInputStream;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.SequenceFile;
import org.apache.hadoop.typedbytes.TypedBytesInput;
import org.apache.hadoop.typedbytes.TypedBytesWritable;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.util.ToolRunner;
public class LoadTypedBytes implements Tool
