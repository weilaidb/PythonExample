package org.apache.hadoop.yarn.webapp;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.ext.Provider;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.codehaus.jackson.jaxrs.JacksonJaxbJsonProvider;
import org.codehaus.jackson.map.AnnotationIntrospector;
import org.codehaus.jackson.map.ObjectMapper;
import org.codehaus.jackson.map.annotate.JsonSerialize.Inclusion;
import org.codehaus.jackson.xc.JaxbAnnotationIntrospector;
import com.google.inject.Singleton;
@Singleton
@Provider
@Unstable
@Private
public class YarnJacksonJaxbJsonProvider extends JacksonJaxbJsonProvider
