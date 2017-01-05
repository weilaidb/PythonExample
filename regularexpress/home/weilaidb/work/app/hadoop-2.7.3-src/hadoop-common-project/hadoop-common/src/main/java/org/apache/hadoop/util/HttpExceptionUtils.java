package org.apache.hadoop.util;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.codehaus.jackson.map.ObjectMapper;
import javax.servlet.http.HttpServletResponse;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;
import java.io.IOException;
import java.io.InputStream;
import java.io.Writer;
import java.lang.reflect.Constructor;
import java.net.HttpURLConnection;
import java.util.LinkedHashMap;
import java.util.Map;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class HttpExceptionUtils
