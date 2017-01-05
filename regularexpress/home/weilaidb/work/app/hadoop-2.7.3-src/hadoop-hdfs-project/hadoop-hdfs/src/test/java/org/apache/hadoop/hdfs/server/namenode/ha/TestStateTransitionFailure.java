package org.apache.hadoop.hdfs.server.namenode.ha;
import static org.apache.hadoop.test.GenericTestUtils.assertExceptionContains;
import static org.junit.Assert.fail;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.MiniDFSNNTopology;
import org.apache.hadoop.util.ExitUtil.ExitException;
import org.junit.Test;
public class TestStateTransitionFailure
