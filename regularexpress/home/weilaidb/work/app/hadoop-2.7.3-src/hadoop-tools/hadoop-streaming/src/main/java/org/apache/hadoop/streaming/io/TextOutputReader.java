package org.apache.hadoop.streaming.io;
import java.io.DataInput;
import java.io.IOException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;
import java.nio.charset.CharacterCodingException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.streaming.PipeMapRed;
import org.apache.hadoop.streaming.StreamKeyValUtil;
import org.apache.hadoop.util.LineReader;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.util.UTF8ByteArrayUtils;
public class TextOutputReader extends OutputReader<Text, Text>
