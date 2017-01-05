package org.apache.hadoop.hdfs.server.namenode;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.RandomAccessFile;
import java.util.Arrays;
import org.apache.commons.io.Charsets;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.protocol.LayoutVersion.Feature;
import org.apache.hadoop.hdfs.server.namenode.FSImageFormatProtobuf.Loader;
import org.apache.hadoop.hdfs.server.namenode.FsImageProto.FileSummary;
import org.apache.hadoop.io.compress.CompressionCodec;
@InterfaceAudience.Private
public final class FSImageUtil
