package org.apache.hadoop.hdfs.nfs.nfs3;
import java.io.IOException;
import org.apache.hadoop.hdfs.DFSClient;
import org.apache.hadoop.hdfs.protocol.HdfsFileStatus;
import org.apache.hadoop.nfs.NfsFileType;
import org.apache.hadoop.nfs.NfsTime;
import org.apache.hadoop.nfs.nfs3.FileHandle;
import org.apache.hadoop.nfs.nfs3.Nfs3Constant;
import org.apache.hadoop.nfs.nfs3.Nfs3FileAttributes;
import org.apache.hadoop.nfs.nfs3.response.WccAttr;
import org.apache.hadoop.nfs.nfs3.response.WccData;
import org.apache.hadoop.oncrpc.XDR;
import org.apache.hadoop.security.IdMappingServiceProvider;
import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.channel.Channel;
public class Nfs3Utils
