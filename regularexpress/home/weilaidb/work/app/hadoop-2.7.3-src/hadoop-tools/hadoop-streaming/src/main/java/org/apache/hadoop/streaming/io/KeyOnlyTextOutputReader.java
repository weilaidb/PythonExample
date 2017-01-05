package org.apache.hadoop.streaming.io;
import java.io.DataInput;
import java.io.IOException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.NullWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.streaming.PipeMapRed;
import org.apache.hadoop.util.LineReader;
public class KeyOnlyTextOutputReader extends OutputReader<Text, NullWritable>
