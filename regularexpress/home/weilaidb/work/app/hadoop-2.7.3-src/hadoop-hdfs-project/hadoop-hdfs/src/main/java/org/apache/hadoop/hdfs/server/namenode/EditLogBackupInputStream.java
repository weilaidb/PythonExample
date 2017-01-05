package org.apache.hadoop.hdfs.server.namenode;
import java.io.DataInputStream;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import com.google.common.base.Preconditions;
class EditLogBackupInputStream extends EditLogInputStream
