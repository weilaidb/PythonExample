package org.apache.hadoop.yarn.webapp;
import java.io.IOException;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletRequestWrapper;
import javax.servlet.http.HttpServletResponse;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import com.google.inject.Singleton;
@InterfaceAudience.LimitedPrivate()
@Singleton
public class DefaultWrapperServlet extends HttpServlet
