package org.apache.hadoop.hdfs.tools.offlineImageViewer;
import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintStream;
import java.io.RandomAccessFile;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.protocol.proto.HdfsProtos.BlockProto;
import org.apache.hadoop.hdfs.server.namenode.FSImageFormatProtobuf.SectionName;
import org.apache.hadoop.hdfs.server.namenode.FSImageUtil;
import org.apache.hadoop.hdfs.server.namenode.FsImageProto.FileSummary;
import org.apache.hadoop.hdfs.server.namenode.FsImageProto.INodeSection;
import org.apache.hadoop.util.LimitInputStream;
import com.google.common.base.Preconditions;
final class FileDistributionCalculator
