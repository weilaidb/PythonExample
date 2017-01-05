package org.apache.hadoop.hdfs.server.protocol;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.protocol.DatanodeID;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class DisallowedDatanodeException extends IOException
