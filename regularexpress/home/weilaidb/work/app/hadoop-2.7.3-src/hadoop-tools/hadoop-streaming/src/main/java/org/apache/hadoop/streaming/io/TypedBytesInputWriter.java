package org.apache.hadoop.streaming.io;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.streaming.PipeMapRed;
import org.apache.hadoop.typedbytes.TypedBytesOutput;
import org.apache.hadoop.typedbytes.TypedBytesWritableOutput;
public class TypedBytesInputWriter extends InputWriter<Object, Object>
