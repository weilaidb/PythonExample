package org.apache.hadoop.hdfs.server.namenode;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_NAMENODE_CHECKPOINT_TXNS_KEY;
import java.io.IOException;
import java.lang.management.ManagementFactory;
import javax.management.AttributeNotFoundException;
import javax.management.InstanceNotFoundException;
import javax.management.MBeanException;
import javax.management.MBeanServer;
import javax.management.MalformedObjectNameException;
import javax.management.ObjectName;
import javax.management.ReflectionException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.junit.AfterClass;
import org.junit.Assert;
import org.junit.BeforeClass;
import org.junit.Test;
public class TestSecondaryWebUi
