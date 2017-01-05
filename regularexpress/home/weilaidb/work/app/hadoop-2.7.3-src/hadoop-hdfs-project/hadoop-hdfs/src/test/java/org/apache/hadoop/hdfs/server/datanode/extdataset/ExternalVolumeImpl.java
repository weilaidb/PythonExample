package org.apache.hadoop.hdfs.server.datanode.extdataset;
import java.io.File;
import java.io.IOException;
import java.nio.channels.ClosedChannelException;
import org.apache.hadoop.fs.StorageType;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsDatasetSpi;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsVolumeReference;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsVolumeSpi;
public class ExternalVolumeImpl implements FsVolumeSpi
