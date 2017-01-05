package org.apache.hadoop.streaming.io;
import java.io.ByteArrayOutputStream;
import java.io.DataOutput;
import java.io.DataOutputStream;
import java.io.IOException;
import org.apache.hadoop.io.BytesWritable;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.streaming.PipeMapRed;
public class RawBytesInputWriter extends InputWriter<Writable, Writable>
