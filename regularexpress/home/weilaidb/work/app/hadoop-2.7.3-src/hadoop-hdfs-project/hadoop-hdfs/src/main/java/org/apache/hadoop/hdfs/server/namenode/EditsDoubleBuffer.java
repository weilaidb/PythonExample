package org.apache.hadoop.hdfs.server.namenode;
import java.io.IOException;
import java.io.OutputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.hdfs.server.namenode.FSEditLogOp.Writer;
import org.apache.hadoop.io.DataOutputBuffer;
import org.apache.hadoop.io.IOUtils;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public class EditsDoubleBuffer
