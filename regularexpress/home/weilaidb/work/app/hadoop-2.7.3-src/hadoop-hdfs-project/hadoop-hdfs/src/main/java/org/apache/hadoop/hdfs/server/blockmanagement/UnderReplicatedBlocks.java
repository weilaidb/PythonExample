package org.apache.hadoop.hdfs.server.blockmanagement;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.util.LightWeightLinkedSet;
import org.apache.hadoop.hdfs.server.namenode.NameNode;
class UnderReplicatedBlocks implements Iterable<Block>
