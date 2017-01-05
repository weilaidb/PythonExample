package org.apache.hadoop.hdfs.server.datanode.fsdataset.impl;
import com.google.common.base.Preconditions;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsVolumeSpi;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.util.Time;
import java.io.File;
import java.util.concurrent.atomic.AtomicLong;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public abstract class RamDiskReplicaTracker
