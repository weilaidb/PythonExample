package org.apache.hadoop.hdfs.server.namenode;
import static org.apache.hadoop.hdfs.server.namenode.NNStorage.getFinalizedEditsFileName;
import static org.apache.hadoop.hdfs.server.namenode.NNStorage.getImageFileName;
import static org.apache.hadoop.hdfs.server.namenode.NNStorage.getInProgressEditsFileName;
import static org.apache.hadoop.test.GenericTestUtils.assertGlobEquals;
import static org.junit.Assert.assertEquals;
import java.io.File;
import java.io.IOException;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.protocol.HdfsConstants.SafeModeAction;
import org.junit.Test;
import com.google.common.base.Joiner;
public class TestNNStorageRetentionFunctional
