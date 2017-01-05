package org.apache.hadoop.hdfs.server.blockmanagement;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.hdfs.server.common.GenerationStamp;
import java.io.IOException;
public class BlockIdManager
