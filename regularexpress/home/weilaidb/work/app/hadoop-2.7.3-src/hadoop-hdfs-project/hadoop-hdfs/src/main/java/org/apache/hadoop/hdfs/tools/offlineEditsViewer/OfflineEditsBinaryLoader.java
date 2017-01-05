package org.apache.hadoop.hdfs.tools.offlineEditsViewer;
import java.io.IOException;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.tools.offlineEditsViewer.OfflineEditsViewer;
import org.apache.hadoop.hdfs.server.namenode.FSEditLogOp;
import org.apache.hadoop.hdfs.server.namenode.EditLogInputStream;
import org.apache.hadoop.io.IOUtils;
@InterfaceAudience.Private
@InterfaceStability.Unstable
class OfflineEditsBinaryLoader implements OfflineEditsLoader
