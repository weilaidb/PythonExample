package org.apache.hadoop.lib.wsrs;
import org.apache.commons.io.Charsets;
import org.apache.hadoop.classification.InterfaceAudience;
import org.json.simple.JSONObject;
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
import java.util.Map;
@Provider
@Produces(MediaType.APPLICATION_JSON)
@InterfaceAudience.Private
public class JSONMapProvider implements MessageBodyWriter<Map>
