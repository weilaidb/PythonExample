package org.apache.hadoop.yarn.server.resourcemanager.webapp;
import static org.apache.hadoop.yarn.util.StringHelper.pajoin;
import java.net.InetSocketAddress;
import org.apache.hadoop.ha.HAServiceProtocol.HAServiceState;
import org.apache.hadoop.yarn.api.ApplicationBaseProtocol;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.util.RMHAUtils;
import org.apache.hadoop.yarn.server.resourcemanager.RMContext;
import org.apache.hadoop.yarn.server.resourcemanager.ResourceManager;
import org.apache.hadoop.yarn.webapp.GenericExceptionHandler;
import org.apache.hadoop.yarn.webapp.WebApp;
import org.apache.hadoop.yarn.webapp.YarnWebParams;
import com.sun.jersey.guice.spi.container.servlet.GuiceContainer;
public class RMWebApp extends WebApp implements YarnWebParams
