package org.apache.hadoop.hdfs.server.datanode;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSClient;
import org.apache.hadoop.hdfs.server.common.JspHelper;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.security.UserGroupInformation;
import javax.servlet.http.HttpServletRequest;
import java.io.IOException;
import java.security.PrivilegedExceptionAction;
@InterfaceAudience.Private
public class DatanodeJspHelper
