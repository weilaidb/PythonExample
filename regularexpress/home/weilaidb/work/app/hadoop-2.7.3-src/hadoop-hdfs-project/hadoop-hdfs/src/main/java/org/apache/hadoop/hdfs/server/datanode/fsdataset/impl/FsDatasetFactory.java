package org.apache.hadoop.hdfs.server.datanode.fsdataset.impl;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.server.datanode.DataNode;
import org.apache.hadoop.hdfs.server.datanode.DataStorage;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsDatasetSpi;
public class FsDatasetFactory extends FsDatasetSpi.Factory<FsDatasetImpl>
