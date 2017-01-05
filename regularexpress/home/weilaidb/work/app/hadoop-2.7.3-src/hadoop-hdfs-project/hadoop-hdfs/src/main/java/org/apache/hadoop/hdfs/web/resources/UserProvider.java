package org.apache.hadoop.hdfs.web.resources;
import java.io.IOException;
import java.lang.reflect.Type;
import javax.servlet.ServletContext;
import javax.servlet.http.HttpServletRequest;
import javax.ws.rs.core.Context;
import javax.ws.rs.ext.Provider;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.server.common.JspHelper;
import org.apache.hadoop.security.SecurityUtil;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.UserGroupInformation.AuthenticationMethod;
import com.sun.jersey.api.core.HttpContext;
import com.sun.jersey.core.spi.component.ComponentContext;
import com.sun.jersey.core.spi.component.ComponentScope;
import com.sun.jersey.server.impl.inject.AbstractHttpContextInjectable;
import com.sun.jersey.spi.inject.Injectable;
import com.sun.jersey.spi.inject.InjectableProvider;
@Provider
public class UserProvider
extends AbstractHttpContextInjectable<UserGroupInformation>
implements InjectableProvider<Context, Type>
