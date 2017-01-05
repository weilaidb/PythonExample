package org.apache.hadoop.mount;
import java.io.IOException;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.oncrpc.RpcProgram;
import org.apache.hadoop.oncrpc.SimpleTcpServer;
import org.apache.hadoop.oncrpc.SimpleUdpServer;
import org.apache.hadoop.portmap.PortmapMapping;
import org.apache.hadoop.util.ShutdownHookManager;
import static org.apache.hadoop.util.ExitUtil.terminate;
abstract public class MountdBase
