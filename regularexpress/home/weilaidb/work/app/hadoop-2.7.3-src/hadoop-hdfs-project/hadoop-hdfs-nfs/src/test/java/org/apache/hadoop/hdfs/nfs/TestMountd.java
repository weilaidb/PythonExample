package org.apache.hadoop.hdfs.nfs;
import java.io.IOException;
import java.net.InetAddress;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.nfs.conf.NfsConfiguration;
import org.apache.hadoop.hdfs.nfs.mount.RpcProgramMountd;
import org.apache.hadoop.hdfs.nfs.nfs3.Nfs3;
import org.apache.hadoop.hdfs.nfs.nfs3.RpcProgramNfs3;
import org.apache.hadoop.oncrpc.XDR;
import org.junit.Test;
public class TestMountd
