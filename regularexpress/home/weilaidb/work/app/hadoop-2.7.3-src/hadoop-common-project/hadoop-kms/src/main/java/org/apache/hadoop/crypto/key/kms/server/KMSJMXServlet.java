package org.apache.hadoop.crypto.key.kms.server;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.jmx.JMXJsonServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
@InterfaceAudience.Private
public class KMSJMXServlet extends JMXJsonServlet
