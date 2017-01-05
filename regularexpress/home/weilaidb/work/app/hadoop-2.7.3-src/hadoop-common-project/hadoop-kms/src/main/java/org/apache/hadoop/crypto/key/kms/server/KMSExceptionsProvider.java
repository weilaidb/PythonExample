package org.apache.hadoop.crypto.key.kms.server;
import org.apache.hadoop.classification.InterfaceAudience;
import com.sun.jersey.api.container.ContainerException;
import org.apache.hadoop.security.AccessControlException;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.authentication.client.AuthenticationException;
import org.apache.hadoop.security.authorize.AuthorizationException;
import org.apache.hadoop.util.HttpExceptionUtils;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import javax.ws.rs.core.Response;
import javax.ws.rs.ext.ExceptionMapper;
import javax.ws.rs.ext.Provider;
import java.io.IOException;
@Provider
@InterfaceAudience.Private
public class KMSExceptionsProvider implements ExceptionMapper<Exception>
