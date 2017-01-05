package org.apache.hadoop.hdfs.server.blockmanagement;
import java.util.*;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.StorageType;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.protocol.DatanodeInfo;
import org.apache.hadoop.net.NetworkTopology;
import org.apache.hadoop.net.NetworkTopologyWithNodeGroup;
import org.apache.hadoop.net.Node;
import org.apache.hadoop.net.NodeBase;
public class BlockPlacementPolicyWithNodeGroup extends BlockPlacementPolicyDefault
