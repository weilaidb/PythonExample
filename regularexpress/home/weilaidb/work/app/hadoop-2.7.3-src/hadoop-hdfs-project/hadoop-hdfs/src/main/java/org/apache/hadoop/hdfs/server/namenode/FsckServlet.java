package org.apache.hadoop.hdfs.server.namenode;
import java.io.IOException;
import java.io.PrintWriter;
import java.net.InetAddress;
import java.security.PrivilegedExceptionAction;
import java.util.Map;
import javax.servlet.ServletContext;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.protocol.HdfsConstants.DatanodeReportType;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockManager;
import org.apache.hadoop.security.UserGroupInformation;
@InterfaceAudience.Private
public class FsckServlet extends DfsServlet
