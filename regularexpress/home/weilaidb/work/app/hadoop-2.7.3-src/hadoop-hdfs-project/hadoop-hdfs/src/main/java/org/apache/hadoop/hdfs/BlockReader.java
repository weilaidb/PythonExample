package org.apache.hadoop.hdfs;
import java.io.IOException;
import java.util.EnumSet;
import org.apache.hadoop.fs.ByteBufferReadable;
import org.apache.hadoop.fs.ReadOption;
import org.apache.hadoop.hdfs.shortcircuit.ClientMmap;
public interface BlockReader extends ByteBufferReadable
