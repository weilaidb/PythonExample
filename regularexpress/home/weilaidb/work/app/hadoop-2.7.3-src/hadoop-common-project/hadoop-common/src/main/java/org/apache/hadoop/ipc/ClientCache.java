package org.apache.hadoop.ipc;
import java.util.HashMap;
import java.util.Map;
import javax.net.SocketFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.ObjectWritable;
import org.apache.hadoop.io.Writable;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class ClientCache
