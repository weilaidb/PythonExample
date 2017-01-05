package org.apache.hadoop.hdfs.protocol;
import java.util.Arrays;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.StorageType;
import org.apache.hadoop.hdfs.security.token.block.BlockTokenIdentifier;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeStorageInfo;
import org.apache.hadoop.hdfs.protocol.DatanodeInfoWithStorage;
import org.apache.hadoop.security.token.Token;
import com.google.common.collect.Lists;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class LocatedBlock
