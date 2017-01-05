package org.apache.hadoop.hdfs.server.datanode;
import java.util.HashMap;
import java.util.Map;
import java.util.SortedSet;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.protocol.LayoutVersion;
import org.apache.hadoop.hdfs.protocol.LayoutVersion.FeatureInfo;
import org.apache.hadoop.hdfs.protocol.LayoutVersion.LayoutFeature;
@InterfaceAudience.Private
public class DataNodeLayoutVersion
