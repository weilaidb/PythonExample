package org.apache.hadoop.hdfs.tools.offlineEditsViewer;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.util.StringUtils;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class OfflineEditsVisitorFactory
