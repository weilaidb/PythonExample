package org.apache.hadoop.hdfs.protocol.datatransfer;
import static org.apache.hadoop.hdfs.protocolPB.PBHelper.vintPrefixed;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import com.google.common.collect.Lists;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_OOB_TIMEOUT_KEY;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_DATANODE_OOB_TIMEOUT_DEFAULT;
import org.apache.hadoop.hdfs.protocol.proto.DataTransferProtos.PipelineAckProto;
import org.apache.hadoop.hdfs.protocol.proto.DataTransferProtos.Status;
import com.google.protobuf.TextFormat;
import org.apache.hadoop.hdfs.util.LongBitFormat;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class PipelineAck
