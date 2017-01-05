package org.apache.hadoop.hdfs.tools.offlineEditsViewer;
import java.io.File;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.tools.offlineEditsViewer.OfflineEditsViewer;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.hdfs.server.namenode.EditLogFileInputStream;
import org.apache.hadoop.hdfs.server.namenode.EditLogInputStream;
@InterfaceAudience.Private
@InterfaceStability.Unstable
interface OfflineEditsLoader
