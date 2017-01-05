package org.apache.hadoop.hdfs.server.namenode.snapshot;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.DFSTestUtil;
import org.apache.hadoop.hdfs.DistributedFileSystem;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.ipc.RemoteException;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
public class TestSnapshotNameWithInvalidCharacters
