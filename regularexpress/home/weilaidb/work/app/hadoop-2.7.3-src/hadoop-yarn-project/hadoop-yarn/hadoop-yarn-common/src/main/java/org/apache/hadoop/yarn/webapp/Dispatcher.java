package org.apache.hadoop.yarn.webapp;
import static com.google.common.base.Preconditions.checkState;
import java.io.IOException;
import java.util.Timer;
import java.util.TimerTask;
import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.http.HtmlQuoting;
import org.apache.hadoop.yarn.webapp.Controller.RequestContext;
import org.apache.hadoop.yarn.webapp.Router.Dest;
import org.apache.hadoop.yarn.webapp.view.ErrorPage;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import com.google.common.collect.Iterables;
import com.google.inject.Inject;
import com.google.inject.Injector;
import com.google.inject.Singleton;
@InterfaceAudience.LimitedPrivate()
@Singleton
public class Dispatcher extends HttpServlet
