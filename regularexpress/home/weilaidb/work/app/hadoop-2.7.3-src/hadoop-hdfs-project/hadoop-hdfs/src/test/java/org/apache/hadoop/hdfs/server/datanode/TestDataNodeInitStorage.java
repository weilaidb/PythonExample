package org.apache.hadoop.hdfs.server.datanode;
import java.io.*;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsDatasetSpi;
import org.junit.Test;
import static org.hamcrest.core.IsNot.not;
import static org.junit.Assert.*;
public class TestDataNodeInitStorage
