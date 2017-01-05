package org.apache.hadoop.hdfs.server.protocol;
import java.util.Collection;
import java.util.ArrayList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.protocol.DatanodeInfo;
import org.apache.hadoop.hdfs.protocol.ExtendedBlock;
import org.apache.hadoop.hdfs.protocol.LocatedBlock;
import com.google.common.base.Joiner;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class BlockRecoveryCommand extends DatanodeCommand
