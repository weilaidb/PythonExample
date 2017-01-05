package org.apache.hadoop.hdfs.util;
import java.io.Closeable;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.io.IOUtils;
import com.google.common.io.Files;
import com.google.common.primitives.Longs;
@InterfaceAudience.Private
public class BestEffortLongFile implements Closeable
