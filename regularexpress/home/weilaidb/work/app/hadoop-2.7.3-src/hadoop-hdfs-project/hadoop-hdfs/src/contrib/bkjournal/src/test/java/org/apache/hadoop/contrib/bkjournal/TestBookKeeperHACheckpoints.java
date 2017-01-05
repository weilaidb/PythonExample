package org.apache.hadoop.contrib.bkjournal;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.MiniDFSNNTopology;
import org.apache.hadoop.hdfs.server.namenode.ha.HATestUtil;
import org.apache.hadoop.hdfs.server.namenode.ha.TestStandbyCheckpoints;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import java.net.BindException;
import java.util.Random;
public class TestBookKeeperHACheckpoints extends TestStandbyCheckpoints
