package org.apache.hadoop.yarn.server.nodemanager.webapp;
import java.util.Set;
import java.util.HashSet;
import java.util.Arrays;
import com.sun.jersey.api.json.JSONConfiguration;
import com.sun.jersey.api.json.JSONJAXBContext;
import com.google.inject.Singleton;
import javax.ws.rs.ext.ContextResolver;
import javax.ws.rs.ext.Provider;
import javax.xml.bind.JAXBContext;
import org.apache.hadoop.yarn.server.nodemanager.webapp.dao.AppInfo;
import org.apache.hadoop.yarn.server.nodemanager.webapp.dao.AppsInfo;
import org.apache.hadoop.yarn.server.nodemanager.webapp.dao.ContainerInfo;
import org.apache.hadoop.yarn.server.nodemanager.webapp.dao.ContainersInfo;
import org.apache.hadoop.yarn.server.nodemanager.webapp.dao.NodeInfo;
import org.apache.hadoop.yarn.webapp.RemoteExceptionData;
@Singleton
@Provider
public class JAXBContextResolver implements ContextResolver<JAXBContext>
