package org.apache.hadoop.hdfs.server.blockmanagement;
import java.io.PrintWriter;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.protocol.DatanodeInfo;
import org.apache.hadoop.hdfs.server.namenode.NameNode;
import org.apache.hadoop.hdfs.util.LightWeightHashSet;
import org.apache.hadoop.util.Time;
import org.apache.hadoop.hdfs.DFSUtil;
import com.google.common.annotations.VisibleForTesting;
import org.slf4j.Logger;
@InterfaceAudience.Private
class InvalidateBlocks
