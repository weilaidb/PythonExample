package org.apache.hadoop.hdfs.server.namenode;
import java.net.BindException;
import java.util.Random;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_NAMENODE_CHECKPOINT_PERIOD_KEY;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_NAMENODE_CHECKPOINT_TXNS_KEY;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_NAMENODE_EDIT_LOG_AUTOROLL_CHECK_INTERVAL_MS;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_NAMENODE_EDIT_LOG_AUTOROLL_MULTIPLIER_THRESHOLD;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.MiniDFSNNTopology;
import org.apache.hadoop.hdfs.server.namenode.FSNamesystem.NameNodeEditLogRoller;
import org.apache.hadoop.hdfs.server.namenode.ha.HATestUtil;
import org.apache.hadoop.test.GenericTestUtils;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import com.google.common.base.Supplier;
public class TestEditLogAutoroll