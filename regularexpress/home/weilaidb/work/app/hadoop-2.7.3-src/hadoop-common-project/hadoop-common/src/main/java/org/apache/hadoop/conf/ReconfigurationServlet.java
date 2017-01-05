package org.apache.hadoop.conf;
import org.apache.commons.logging.*;
import org.apache.commons.lang.StringEscapeUtils;
import java.util.Collection;
import java.util.Enumeration;
import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.hadoop.util.StringUtils;
public class ReconfigurationServlet extends HttpServlet
