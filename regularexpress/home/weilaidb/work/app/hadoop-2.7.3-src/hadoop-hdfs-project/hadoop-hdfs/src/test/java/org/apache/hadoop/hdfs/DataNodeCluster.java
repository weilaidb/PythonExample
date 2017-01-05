package org.apache.hadoop.hdfs;
import java.io.IOException;
import java.net.UnknownHostException;
import java.util.Arrays;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.StartupOption;
import org.apache.hadoop.hdfs.server.datanode.SimulatedFSDataset;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsDatasetSpi;
import org.apache.hadoop.hdfs.server.namenode.CreateEditsLog;
import org.apache.hadoop.net.DNS;
import org.apache.hadoop.util.Time;
public class DataNodeCluster
