package org.apache.hadoop.yarn.server.webproxy;
import static org.junit.Assert.assertEquals;
import org.apache.hadoop.service.Service;
import org.apache.hadoop.service.Service.STATE;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.server.webproxy.WebAppProxyServer;
import org.junit.After;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import java.net.InetSocketAddress;
public class TestWebAppProxyServer
