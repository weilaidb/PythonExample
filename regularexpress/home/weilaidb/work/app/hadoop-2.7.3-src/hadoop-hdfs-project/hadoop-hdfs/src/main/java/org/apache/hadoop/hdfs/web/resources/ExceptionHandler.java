package org.apache.hadoop.hdfs.web.resources;
import java.io.FileNotFoundException;
import java.io.IOException;
import javax.servlet.http.HttpServletResponse;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;
import javax.ws.rs.ext.ExceptionMapper;
import javax.ws.rs.ext.Provider;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.hdfs.web.JsonUtil;
import org.apache.hadoop.ipc.RemoteException;
import org.apache.hadoop.ipc.StandbyException;
import org.apache.hadoop.security.authorize.AuthorizationException;
import org.apache.hadoop.security.token.SecretManager.InvalidToken;
import com.google.common.annotations.VisibleForTesting;
import com.sun.jersey.api.ParamException;
import com.sun.jersey.api.container.ContainerException;
@Provider
public class ExceptionHandler implements ExceptionMapper<Exception>
