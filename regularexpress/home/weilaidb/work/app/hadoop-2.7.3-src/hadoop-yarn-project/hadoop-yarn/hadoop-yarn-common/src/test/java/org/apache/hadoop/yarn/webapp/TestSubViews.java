package org.apache.hadoop.yarn.webapp;
import org.apache.hadoop.yarn.webapp.test.WebAppTests;
import org.apache.hadoop.yarn.webapp.view.HtmlBlock;
import org.apache.hadoop.yarn.webapp.view.HtmlPage;
import java.io.PrintWriter;
import javax.servlet.http.HttpServletResponse;
import com.google.inject.Injector;
import org.junit.Test;
import static org.mockito.Mockito.*;
public class TestSubViews
