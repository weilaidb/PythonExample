package org.apache.hadoop.hdfs.server.datanode;
import java.io.IOException;
import org.apache.commons.logging.impl.Log4JLogger;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fi.DataTransferTestUtil;
import org.apache.hadoop.fi.DataTransferTestUtil.DataTransferTest;
import org.apache.hadoop.fi.DataTransferTestUtil.DoosAction;
import org.apache.hadoop.fi.DataTransferTestUtil.OomAction;
import org.apache.hadoop.fi.DataTransferTestUtil.SleepAction;
import org.apache.hadoop.fi.DataTransferTestUtil.VerificationAction;
import org.apache.hadoop.fi.FiTestUtil;
import org.apache.hadoop.fi.FiTestUtil.Action;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.protocol.datatransfer.DataTransferProtocol;
import org.apache.hadoop.hdfs.protocol.DatanodeID;
import org.apache.log4j.Level;
import org.junit.Assert;
import org.junit.Test;
public class TestFiDataTransferProtocol
