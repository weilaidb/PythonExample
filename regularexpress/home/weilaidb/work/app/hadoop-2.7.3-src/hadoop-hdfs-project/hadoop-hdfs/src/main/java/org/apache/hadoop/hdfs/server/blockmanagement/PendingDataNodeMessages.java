package org.apache.hadoop.hdfs.server.blockmanagement;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.ReplicaState;
import com.google.common.collect.Lists;
import com.google.common.collect.Maps;
class PendingDataNodeMessages