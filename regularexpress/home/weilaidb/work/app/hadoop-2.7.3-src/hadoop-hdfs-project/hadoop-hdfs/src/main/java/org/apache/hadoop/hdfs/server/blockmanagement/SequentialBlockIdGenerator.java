package org.apache.hadoop.hdfs.server.blockmanagement;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockManager;
import org.apache.hadoop.util.SequentialNumber;
@InterfaceAudience.Private
public class SequentialBlockIdGenerator extends SequentialNumber
