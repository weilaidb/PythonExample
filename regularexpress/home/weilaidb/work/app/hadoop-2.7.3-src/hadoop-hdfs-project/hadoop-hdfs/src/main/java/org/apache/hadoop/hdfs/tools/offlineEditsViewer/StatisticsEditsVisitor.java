package org.apache.hadoop.hdfs.tools.offlineEditsViewer;
import java.io.IOException;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.util.Map;
import java.util.HashMap;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.server.namenode.FSEditLogOp;
import org.apache.hadoop.hdfs.server.namenode.FSEditLogOpCodes;
import com.google.common.base.Charsets;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class StatisticsEditsVisitor implements OfflineEditsVisitor
