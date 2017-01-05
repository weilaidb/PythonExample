package org.apache.hadoop.hdfs.protocol;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.server.protocol.JournalInfo;
import org.apache.hadoop.hdfs.server.protocol.NodeRegistration;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class UnregisteredNodeException extends IOException
