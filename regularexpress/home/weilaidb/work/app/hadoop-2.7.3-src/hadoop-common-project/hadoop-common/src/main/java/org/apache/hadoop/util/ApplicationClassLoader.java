package org.apache.hadoop.util;
import java.io.File;
import java.io.FilenameFilter;
import java.io.IOException;
import java.io.InputStream;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLClassLoader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Properties;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
@Public
@Unstable
public class ApplicationClassLoader extends URLClassLoader {
public static final String SYSTEM_CLASSES_DEFAULT;
private static final String PROPERTIES_FILE =
"org.apache.hadoop.application-classloader.properties";
private static final String SYSTEM_CLASSES_DEFAULT_KEY =
"system.classes.default";
private static final Log LOG =
LogFactory.getLog(ApplicationClassLoader.class.getName());
private static final FilenameFilter JAR_FILENAME_FILTER =
new FilenameFilter() ;
static
private final ClassLoader parent;
private final List<String> systemClasses;
public ApplicationClassLoader(URL[] urls, ClassLoader parent,
List<String> systemClasses)
public ApplicationClassLoader(String classpath, ClassLoader parent,
List<String> systemClasses) throws MalformedURLException
static URL[] constructUrlsFromClasspath(String classpath)
throws MalformedURLException {
List<URL> urls = new ArrayList<URL>();
for (String element : classpath.split(File.pathSeparator))
