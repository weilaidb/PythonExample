package org.apache.hadoop.lib.servlet;
import org.apache.hadoop.classification.InterfaceAudience;
import javax.servlet.Filter;
import javax.servlet.FilterChain;
import javax.servlet.FilterConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import java.io.IOException;
import java.net.InetAddress;
import java.net.UnknownHostException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
@InterfaceAudience.Private
public class HostnameFilter implements Filter
