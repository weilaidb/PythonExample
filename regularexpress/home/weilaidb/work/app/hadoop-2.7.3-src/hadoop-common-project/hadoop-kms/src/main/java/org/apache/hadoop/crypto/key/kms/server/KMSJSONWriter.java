package org.apache.hadoop.crypto.key.kms.server;
import org.apache.hadoop.classification.InterfaceAudience;
import org.codehaus.jackson.map.ObjectMapper;
import javax.ws.rs.Produces;
import javax.ws.rs.WebApplicationException;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.MultivaluedMap;
import javax.ws.rs.ext.MessageBodyWriter;
import javax.ws.rs.ext.Provider;
import java.io.IOException;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.Writer;
import java.lang.annotation.Annotation;
import java.lang.reflect.Type;
import java.nio.charset.Charset;
import java.util.List;
import java.util.Map;
@Provider
@Produces(MediaType.APPLICATION_JSON)
@InterfaceAudience.Private
public class KMSJSONWriter implements MessageBodyWriter<Object>
