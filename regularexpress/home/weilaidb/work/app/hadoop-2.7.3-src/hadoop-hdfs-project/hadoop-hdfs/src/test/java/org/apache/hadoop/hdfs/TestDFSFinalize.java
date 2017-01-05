package org.apache.hadoop.hdfs;
import static org.apache.hadoop.hdfs.server.common.HdfsServerConstants.NodeType.DATA_NODE;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import java.io.File;
import java.util.Collections;
import java.util.List;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.StartupOption;
import org.apache.hadoop.hdfs.server.namenode.FSImageTestUtil;
import org.apache.hadoop.hdfs.server.datanode.BlockPoolSliceStorage;
import org.apache.hadoop.hdfs.server.datanode.DataStorage;
import org.junit.After;
import org.junit.Test;
import com.google.common.collect.Lists;
public class TestDFSFinalize
