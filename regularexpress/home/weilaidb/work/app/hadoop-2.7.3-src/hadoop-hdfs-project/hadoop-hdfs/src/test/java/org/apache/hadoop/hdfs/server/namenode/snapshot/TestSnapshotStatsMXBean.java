package org.apache.hadoop.hdfs.server.namenode.snapshot;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import java.lang.management.ManagementFactory;
import java.lang.reflect.Array;
import javax.management.MBeanServer;
import javax.management.ObjectName;
import javax.management.openmbean.CompositeData;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.DistributedFileSystem;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.junit.Test;
public class TestSnapshotStatsMXBean
