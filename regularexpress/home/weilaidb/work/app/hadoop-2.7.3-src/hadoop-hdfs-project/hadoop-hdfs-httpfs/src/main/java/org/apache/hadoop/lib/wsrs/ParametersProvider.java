package org.apache.hadoop.lib.wsrs;
import com.google.common.collect.Lists;
import com.sun.jersey.api.core.HttpContext;
import com.sun.jersey.core.spi.component.ComponentContext;
import com.sun.jersey.core.spi.component.ComponentScope;
import com.sun.jersey.server.impl.inject.AbstractHttpContextInjectable;
import com.sun.jersey.spi.inject.Injectable;
import com.sun.jersey.spi.inject.InjectableProvider;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.util.StringUtils;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.MultivaluedMap;
import java.lang.reflect.Type;
import java.text.MessageFormat;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
@InterfaceAudience.Private
public class ParametersProvider
extends AbstractHttpContextInjectable<Parameters>
implements InjectableProvider<Context, Type>
