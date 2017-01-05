package org.apache.hadoop.hdfs.server.datanode.fsdataset.impl;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertNull;
import static org.junit.Assert.fail;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.server.datanode.FinalizedReplica;
import org.junit.Before;
import org.junit.Test;
public class TestReplicaMap
