package org.apache.hadoop.conf;
import com.google.common.annotations.VisibleForTesting;
import java.io.BufferedInputStream;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.Reader;
import java.io.Writer;
import java.lang.ref.WeakReference;
import java.net.InetSocketAddress;
import java.net.URL;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.ListIterator;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Properties;
import java.util.Set;
import java.util.StringTokenizer;
import java.util.WeakHashMap;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.regex.PatternSyntaxException;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerException;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;
import com.google.common.base.Charsets;
import org.apache.commons.collections.map.UnmodifiableMap;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.security.alias.CredentialProvider;
import org.apache.hadoop.security.alias.CredentialProvider.CredentialEntry;
import org.apache.hadoop.security.alias.CredentialProviderFactory;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.util.StringInterner;
import org.apache.hadoop.util.StringUtils;
import org.codehaus.jackson.JsonFactory;
import org.codehaus.jackson.JsonGenerator;
import org.w3c.dom.DOMException;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import org.w3c.dom.Text;
import org.xml.sax.SAXException;
import com.google.common.base.Preconditions;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class Configuration implements Iterable<Map.Entry<String,String>>,
Writable {
private static final Log LOG =
LogFactory.getLog(Configuration.class);
private static final Log LOG_DEPRECATION =
LogFactory.getLog("org.apache.hadoop.conf.Configuration.deprecation");
private boolean quietmode = true;
private static final String DEFAULT_STRING_CHECK =
"testingforemptydefaultvalue";
private boolean allowNullValueProperties = false;
private static class Resource
private ArrayList<Resource> resources = new ArrayList<Resource>();
static final String UNKNOWN_RESOURCE = "Unknown";
private Set<String> finalParameters = Collections.newSetFromMap(
new ConcurrentHashMap<String, Boolean>());
private boolean loadDefaults = true;
private static final WeakHashMap<Configuration,Object> REGISTRY =
new WeakHashMap<Configuration,Object>();
private static final CopyOnWriteArrayList<String> defaultResources =
new CopyOnWriteArrayList<String>();
private static final Map<ClassLoader, Map<String, WeakReference<Class<?>>>>
CACHE_CLASSES = new WeakHashMap<ClassLoader, Map<String, WeakReference<Class<?>>>>();
private static final Class<?> NEGATIVE_CACHE_SENTINEL =
NegativeCacheSentinel.class;
private Map<String, String[]> updatingResource;
private static class DeprecatedKeyInfo
public static class DeprecationDelta
private static class DeprecationContext
private static DeprecationDelta[] defaultDeprecations =
new DeprecationDelta[] ;
private static AtomicReference<DeprecationContext> deprecationContext =
new AtomicReference<DeprecationContext>(
new DeprecationContext(null, defaultDeprecations));
public static void addDeprecations(DeprecationDelta[] deltas)
@Deprecated
public static void addDeprecation(String key, String[] newKeys,
String customMessage)
public static void addDeprecation(String key, String newKey,
String customMessage)
@Deprecated
public static void addDeprecation(String key, String[] newKeys)
public static void addDeprecation(String key, String newKey)
public static boolean isDeprecated(String key)
public void setDeprecatedProperties()
private String[] handleDeprecation(DeprecationContext deprecations,
String name)
private void handleDeprecation()
static
private Properties properties;
private Properties overlay;
private ClassLoader classLoader;
public Configuration()
public Configuration(boolean loadDefaults)
@SuppressWarnings("unchecked")
public Configuration(Configuration other)
public static synchronized void addDefaultResource(String name)
public void addResource(String name)
public void addResource(URL url)
public void addResource(Path file)
public void addResource(InputStream in)
public void addResource(InputStream in, String name)
public void addResource(Configuration conf)
public synchronized void reloadConfiguration()
private synchronized void addResourceObject(Resource resource)
private static final int MAX_SUBST = 20;
private static final int SUB_START_IDX = 0;
private static final int SUB_END_IDX = SUB_START_IDX + 1;
private static int[] findSubVariable(String eval) {
int[] result = ;
int matchStart;
int leftBrace;
match_loop:
for (matchStart = 1, leftBrace = eval.indexOf('
