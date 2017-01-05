package org.apache.hadoop.hdfs.server.namenode;
import static org.apache.hadoop.test.GenericTestUtils.assertExceptionContains;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNull;
import static org.junit.Assert.assertTrue;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.RollingUpgradeStartupOption;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.StartupOption;
import org.junit.Assert;
import org.junit.Test;
public class TestNameNodeOptionParsing
