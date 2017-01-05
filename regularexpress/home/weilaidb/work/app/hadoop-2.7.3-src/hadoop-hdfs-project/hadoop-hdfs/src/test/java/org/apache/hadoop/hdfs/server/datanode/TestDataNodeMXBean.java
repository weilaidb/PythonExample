package org.apache.hadoop.hdfs.server.datanode;
import java.lang.management.ManagementFactory;
import java.util.List;
import javax.management.MBeanServer;
import javax.management.ObjectName;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.junit.Assert;
import org.junit.Test;
public class TestDataNodeMXBean
