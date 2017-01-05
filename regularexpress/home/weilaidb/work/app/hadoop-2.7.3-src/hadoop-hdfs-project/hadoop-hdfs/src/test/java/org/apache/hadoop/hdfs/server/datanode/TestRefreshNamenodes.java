package org.apache.hadoop.hdfs.server.datanode;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.util.Set;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.MiniDFSNNTopology;
import org.apache.hadoop.hdfs.MiniDFSNNTopology.NNConf;
import org.apache.hadoop.hdfs.MiniDFSNNTopology.NSConf;
import org.junit.Test;
import com.google.common.base.Joiner;
import com.google.common.collect.Sets;
public class TestRefreshNamenodes
