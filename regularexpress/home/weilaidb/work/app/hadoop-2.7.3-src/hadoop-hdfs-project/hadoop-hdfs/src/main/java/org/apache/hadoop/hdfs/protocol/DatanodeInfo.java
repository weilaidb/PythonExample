package org.apache.hadoop.hdfs.protocol;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.net.NetworkTopology;
import org.apache.hadoop.net.Node;
import org.apache.hadoop.net.NodeBase;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.util.Time;
import java.util.Date;
import java.util.LinkedList;
import java.util.List;
import static org.apache.hadoop.hdfs.DFSUtil.percent2String;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class DatanodeInfo extends DatanodeID implements Node
