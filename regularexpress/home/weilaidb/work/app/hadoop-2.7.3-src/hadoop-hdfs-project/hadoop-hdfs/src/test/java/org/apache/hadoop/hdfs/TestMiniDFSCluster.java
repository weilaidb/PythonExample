package org.apache.hadoop.hdfs;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assume.assumeTrue;
import java.io.File;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.test.PathUtils;
import org.junit.Before;
import org.junit.Test;
public class TestMiniDFSCluster
