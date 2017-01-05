package org.apache.hadoop.streaming.io;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.io.BytesWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.streaming.PipeMapRed;
public class TextInputWriter extends InputWriter<Object, Object>
