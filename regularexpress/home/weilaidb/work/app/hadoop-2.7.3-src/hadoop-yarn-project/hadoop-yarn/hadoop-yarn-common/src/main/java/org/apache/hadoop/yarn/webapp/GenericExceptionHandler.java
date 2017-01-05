package org.apache.hadoop.yarn.webapp;
import java.io.FileNotFoundException;
import java.io.IOException;
import javax.servlet.http.HttpServletResponse;
import javax.ws.rs.WebApplicationException;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.Response;
import javax.ws.rs.ext.ExceptionMapper;
import javax.ws.rs.ext.Provider;
import javax.xml.bind.UnmarshalException;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.ipc.RemoteException;
import org.apache.hadoop.security.authorize.AuthorizationException;
import com.google.inject.Singleton;
@InterfaceAudience.LimitedPrivate()
@Singleton
@Provider
public class GenericExceptionHandler implements ExceptionMapper<Exception>
