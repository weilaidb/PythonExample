package org.apache.hadoop.hdfs;
import java.util.HashMap;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSClient.Conf;
import org.apache.hadoop.hdfs.shortcircuit.DomainSocketFactory;
import org.apache.hadoop.hdfs.shortcircuit.ShortCircuitCache;
import org.apache.hadoop.hdfs.util.ByteArrayManager;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.cache.Cache;
@InterfaceAudience.Private
public class ClientContext
