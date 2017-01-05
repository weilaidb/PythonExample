package org.apache.hadoop.net;
import java.net.SocketTimeoutException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class ConnectTimeoutException extends SocketTimeoutException
