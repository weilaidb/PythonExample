package org.apache.hadoop.hdfs.server.namenode;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import java.io.Closeable;
import java.io.IOException;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public abstract class EditLogInputStream implements Closeable
