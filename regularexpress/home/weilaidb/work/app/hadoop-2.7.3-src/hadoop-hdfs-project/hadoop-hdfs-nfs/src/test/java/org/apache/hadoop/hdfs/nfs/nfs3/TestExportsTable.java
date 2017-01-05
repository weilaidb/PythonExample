package org.apache.hadoop.hdfs.nfs.nfs3;
import static org.junit.Assert.assertTrue;
import java.io.IOException;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.nfs.conf.NfsConfigKeys;
import org.apache.hadoop.hdfs.nfs.conf.NfsConfiguration;
import org.apache.hadoop.hdfs.nfs.mount.Mountd;
import org.apache.hadoop.hdfs.nfs.mount.RpcProgramMountd;
import org.junit.Test;
public class TestExportsTable
