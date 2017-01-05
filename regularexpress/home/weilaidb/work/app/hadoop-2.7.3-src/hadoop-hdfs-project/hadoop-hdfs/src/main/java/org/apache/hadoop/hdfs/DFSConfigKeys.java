package org.apache.hadoop.hdfs;
import java.util.concurrent.TimeUnit;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockPlacementPolicyDefault;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.impl.RamDiskReplicaLruTracker;
import org.apache.hadoop.http.HttpConfig;
@InterfaceAudience.Private
public class DFSConfigKeys extends CommonConfigurationKeys
