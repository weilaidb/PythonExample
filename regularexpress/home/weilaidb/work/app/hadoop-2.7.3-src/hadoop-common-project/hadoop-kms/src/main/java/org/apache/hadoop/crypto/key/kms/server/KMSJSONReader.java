package org.apache.hadoop.crypto.key.kms.server;
import org.apache.hadoop.classification.InterfaceAudience;
import org.codehaus.jackson.map.ObjectMapper;
import javax.ws.rs.Consumes;
import javax.ws.rs.WebApplicationException;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.MultivaluedMap;
import javax.ws.rs.ext.MessageBodyReader;
import javax.ws.rs.ext.Provider;
import java.io.IOException;
import java.io.InputStream;
import java.lang.annotation.Annotation;
import java.lang.reflect.Type;
import java.util.Map;
@Provider
@Consumes(MediaType.APPLICATION_JSON)
@InterfaceAudience.Private
public class KMSJSONReader implements MessageBodyReader<Map>
