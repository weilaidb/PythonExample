package org.apache.hadoop.hdfs.server.namenode;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import static org.junit.Assert.assertNotEquals;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import org.apache.hadoop.hdfs.DFSConfigKeys;
public class TestMalformedURLs
