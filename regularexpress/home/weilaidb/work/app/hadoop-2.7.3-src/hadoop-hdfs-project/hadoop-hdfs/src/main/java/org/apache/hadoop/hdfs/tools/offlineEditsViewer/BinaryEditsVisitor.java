package org.apache.hadoop.hdfs.tools.offlineEditsViewer;
import java.io.File;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.server.namenode.FSEditLogOp;
import org.apache.hadoop.hdfs.server.namenode.EditLogFileOutputStream;
import org.apache.hadoop.hdfs.server.namenode.NameNodeLayoutVersion;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class BinaryEditsVisitor implements OfflineEditsVisitor
