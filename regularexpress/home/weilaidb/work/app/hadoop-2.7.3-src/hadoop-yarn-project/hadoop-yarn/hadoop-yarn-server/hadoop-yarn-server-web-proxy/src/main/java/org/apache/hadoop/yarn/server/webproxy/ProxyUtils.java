package org.apache.hadoop.yarn.server.webproxy;
import org.apache.hadoop.yarn.webapp.MimeType;
import org.apache.hadoop.yarn.webapp.hamlet.Hamlet;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.EnumSet;
public class ProxyUtils
