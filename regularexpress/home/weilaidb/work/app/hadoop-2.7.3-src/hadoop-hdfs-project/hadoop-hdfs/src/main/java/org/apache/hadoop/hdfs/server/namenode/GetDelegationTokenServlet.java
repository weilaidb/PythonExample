package org.apache.hadoop.hdfs.server.namenode;
import java.io.DataOutputStream;
import java.io.IOException;
import java.security.PrivilegedExceptionAction;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.security.token.delegation.DelegationTokenSecretManager;
import org.apache.hadoop.security.Credentials;
import org.apache.hadoop.security.UserGroupInformation;
@SuppressWarnings("serial")
public class GetDelegationTokenServlet extends DfsServlet
