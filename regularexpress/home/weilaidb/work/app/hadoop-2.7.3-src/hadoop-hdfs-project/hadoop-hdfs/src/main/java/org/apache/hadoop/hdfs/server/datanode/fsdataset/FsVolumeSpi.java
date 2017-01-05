package org.apache.hadoop.hdfs.server.datanode.fsdataset;
import java.io.Closeable;
import java.io.File;
import java.io.IOException;
import java.nio.channels.ClosedChannelException;
import org.apache.hadoop.fs.StorageType;
import org.apache.hadoop.hdfs.protocol.ExtendedBlock;
public interface FsVolumeSpi
