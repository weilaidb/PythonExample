package org.apache.hadoop.hdfs;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_CLIENT_CONTEXT;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_CLIENT_MAX_BLOCK_ACQUIRE_FAILURES_KEY;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_CLIENT_SOCKET_CACHE_EXPIRY_MSEC_KEY;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_SOCKET_REUSE_KEEPALIVE_DEFAULT;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_SOCKET_REUSE_KEEPALIVE_KEY;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_SOCKET_WRITE_TIMEOUT_KEY;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.io.InputStream;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.MiniDFSCluster.DataNodeProperties;
import org.apache.hadoop.hdfs.net.Peer;
import org.apache.hadoop.hdfs.server.datanode.DataNode;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.test.GenericTestUtils;
import org.apache.hadoop.util.ReflectionUtils;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import com.google.common.base.Supplier;
public class TestDataTransferKeepalive
