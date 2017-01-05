package org.apache.hadoop.streaming.io;
import java.io.DataInput;
import java.io.IOException;
import org.apache.hadoop.streaming.PipeMapRed;
import org.apache.hadoop.typedbytes.TypedBytesInput;
import org.apache.hadoop.typedbytes.TypedBytesWritable;
public class TypedBytesOutputReader extends
OutputReader<TypedBytesWritable, TypedBytesWritable>
