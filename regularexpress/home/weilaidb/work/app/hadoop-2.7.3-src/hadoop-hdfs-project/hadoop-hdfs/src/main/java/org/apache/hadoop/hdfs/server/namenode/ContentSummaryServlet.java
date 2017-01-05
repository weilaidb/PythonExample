package org.apache.hadoop.hdfs.server.namenode;
import java.io.IOException;
import java.io.PrintWriter;
import java.security.PrivilegedExceptionAction;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.ContentSummary;
import org.apache.hadoop.hdfs.protocol.ClientProtocol;
import org.apache.hadoop.hdfs.server.common.JspHelper;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.util.ServletUtil;
import org.znerd.xmlenc.XMLOutputter;
@InterfaceAudience.Private
public class ContentSummaryServlet extends DfsServlet
