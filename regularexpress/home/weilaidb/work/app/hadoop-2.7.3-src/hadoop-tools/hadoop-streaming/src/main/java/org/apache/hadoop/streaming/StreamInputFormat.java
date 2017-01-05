package org.apache.hadoop.streaming;
import java.io.*;
import java.lang.reflect.*;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.*;
public class StreamInputFormat extends KeyValueTextInputFormat
