package org.apache.hadoop.hdfs.shortcircuit;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.Iterator;
import org.apache.hadoop.hdfs.net.DomainPeer;
import org.apache.hadoop.hdfs.shortcircuit.DfsClientShmManager.EndpointShmManager;
import org.apache.hadoop.net.unix.DomainSocket;
import org.apache.hadoop.net.unix.DomainSocketWatcher;
import com.google.common.base.Preconditions;
public class DfsClientShm extends ShortCircuitShm
implements DomainSocketWatcher.Handler
