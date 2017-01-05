package org.apache.hadoop.hdfs.server.namenode;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.assertNotNull;
import java.lang.management.ManagementFactory;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import javax.management.MBeanAttributeInfo;
import javax.management.MBeanInfo;
import javax.management.MBeanServer;
import javax.management.ObjectName;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.junit.Test;
import org.mortbay.util.ajax.JSON;
public class TestFSNamesystemMBean
