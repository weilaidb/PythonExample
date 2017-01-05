package org.apache.hadoop.hdfs.server.namenode;
import java.io.IOException;
import java.net.URL;
import java.security.PrivilegedExceptionAction;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.protocol.ClientProtocol;
import org.apache.hadoop.hdfs.protocol.DatanodeID;
import org.apache.hadoop.hdfs.protocol.DatanodeInfo;
import org.apache.hadoop.hdfs.protocol.HdfsFileStatus;
import org.apache.hadoop.hdfs.protocol.LocatedBlocks;
import org.apache.hadoop.hdfs.server.common.JspHelper;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.util.ServletUtil;
@InterfaceAudience.Private
public class FileDataServlet extends DfsServlet
