package org.apache.hadoop.nfs.nfs3;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.oncrpc.RpcProgram;
import org.apache.hadoop.oncrpc.SimpleTcpServer;
import org.apache.hadoop.portmap.PortmapMapping;
import org.apache.hadoop.util.ShutdownHookManager;
import static org.apache.hadoop.util.ExitUtil.terminate;
public abstract class Nfs3Base
