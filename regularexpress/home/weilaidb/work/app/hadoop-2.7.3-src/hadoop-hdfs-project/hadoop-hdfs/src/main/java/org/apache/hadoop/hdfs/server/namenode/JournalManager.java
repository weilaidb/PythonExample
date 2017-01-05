package org.apache.hadoop.hdfs.server.namenode;
import java.io.Closeable;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.server.common.Storage;
import org.apache.hadoop.hdfs.server.common.Storage.FormatConfirmable;
import org.apache.hadoop.hdfs.server.common.StorageInfo;
import org.apache.hadoop.hdfs.server.protocol.NamespaceInfo;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public interface JournalManager extends Closeable, LogsPurgeable,
FormatConfirmable
