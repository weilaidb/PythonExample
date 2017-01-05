package org.apache.hadoop.fs.http.server;
import com.sun.jersey.api.container.ContainerException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.lib.service.FileSystemAccessException;
import org.apache.hadoop.lib.wsrs.ExceptionProvider;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.slf4j.MDC;
import javax.ws.rs.core.Response;
import javax.ws.rs.ext.Provider;
import java.io.FileNotFoundException;
import java.io.IOException;
@Provider
@InterfaceAudience.Private
public class HttpFSExceptionProvider extends ExceptionProvider
