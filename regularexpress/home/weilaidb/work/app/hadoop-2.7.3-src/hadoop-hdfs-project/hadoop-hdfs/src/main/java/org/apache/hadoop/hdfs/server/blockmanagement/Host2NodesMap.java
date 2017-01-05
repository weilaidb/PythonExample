package org.apache.hadoop.hdfs.server.blockmanagement;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.locks.ReadWriteLock;
import java.util.concurrent.locks.ReentrantReadWriteLock;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.DFSUtil;
@InterfaceAudience.Private
@InterfaceStability.Evolving
class Host2NodesMap
