package org.apache.hadoop.yarn.webapp;
import com.google.inject.Inject;
import com.google.inject.Injector;
import com.google.inject.servlet.RequestScoped;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Map;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import static org.apache.hadoop.yarn.util.StringHelper.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.yarn.api.ApplicationConstants;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
@InterfaceAudience.LimitedPrivate()
public abstract class View implements Params
