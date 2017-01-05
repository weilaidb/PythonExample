package org.apache.hadoop.hdfs.protocol.datatransfer;
import org.apache.hadoop.HadoopIllegalArgumentException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.protocol.DatanodeInfo;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class ReplaceDatanodeOnFailure
