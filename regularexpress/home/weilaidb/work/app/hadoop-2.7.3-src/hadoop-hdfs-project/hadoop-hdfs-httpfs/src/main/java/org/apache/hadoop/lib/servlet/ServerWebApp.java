package org.apache.hadoop.lib.servlet;
import com.google.common.annotations.VisibleForTesting;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.lib.server.Server;
import org.apache.hadoop.lib.server.ServerException;
import javax.servlet.ServletContextEvent;
import javax.servlet.ServletContextListener;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.UnknownHostException;
import java.text.MessageFormat;
@InterfaceAudience.Private
public abstract class ServerWebApp extends Server implements ServletContextListener
