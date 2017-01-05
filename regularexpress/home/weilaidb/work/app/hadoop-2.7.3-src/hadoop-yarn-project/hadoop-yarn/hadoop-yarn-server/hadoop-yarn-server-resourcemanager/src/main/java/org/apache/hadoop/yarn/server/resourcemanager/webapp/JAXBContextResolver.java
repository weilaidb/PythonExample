package org.apache.hadoop.yarn.server.resourcemanager.webapp;
import com.google.inject.Singleton;
import com.sun.jersey.api.json.JSONConfiguration;
import com.sun.jersey.api.json.JSONJAXBContext;
import java.util.*;
import javax.ws.rs.ext.ContextResolver;
import javax.ws.rs.ext.Provider;
import javax.xml.bind.JAXBContext;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.capacity.UserInfo;
import org.apache.hadoop.yarn.server.resourcemanager.webapp.dao.*;
import org.apache.hadoop.yarn.webapp.RemoteExceptionData;
@Singleton
@Provider
public class JAXBContextResolver implements ContextResolver<JAXBContext>
