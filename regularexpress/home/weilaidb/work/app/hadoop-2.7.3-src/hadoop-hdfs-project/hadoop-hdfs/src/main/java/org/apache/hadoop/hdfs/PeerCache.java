package org.apache.hadoop.hdfs;
import java.io.IOException;
import java.util.Iterator;
import java.util.List;
import java.util.Map.Entry;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
import com.google.common.collect.LinkedListMultimap;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.net.Peer;
import org.apache.hadoop.hdfs.protocol.DatanodeID;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.util.Daemon;
import org.apache.hadoop.util.Time;
@InterfaceStability.Unstable
@InterfaceAudience.Private
@VisibleForTesting
public class PeerCache
