package org.apache.hadoop.yarn.webapp;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
import javax.ws.rs.ext.ContextResolver;
import javax.ws.rs.ext.Provider;
import javax.xml.bind.JAXBContext;
import org.apache.hadoop.yarn.webapp.MyTestWebService.MyInfo;
import com.google.inject.Singleton;
import com.sun.jersey.api.json.JSONConfiguration;
import com.sun.jersey.api.json.JSONJAXBContext;
@Singleton
@Provider
public class MyTestJAXBContextResolver implements ContextResolver<JAXBContext>
