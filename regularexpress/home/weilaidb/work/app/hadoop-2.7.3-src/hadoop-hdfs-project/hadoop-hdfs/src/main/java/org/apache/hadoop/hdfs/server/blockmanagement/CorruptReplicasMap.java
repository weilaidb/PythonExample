package org.apache.hadoop.hdfs.server.blockmanagement;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.server.namenode.NameNode;
import org.apache.hadoop.ipc.Server;
import java.util.*;
@InterfaceAudience.Private
public class CorruptReplicasMap
