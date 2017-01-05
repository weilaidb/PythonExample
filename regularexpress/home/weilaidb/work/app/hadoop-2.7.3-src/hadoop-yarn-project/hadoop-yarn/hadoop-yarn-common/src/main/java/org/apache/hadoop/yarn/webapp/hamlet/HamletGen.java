package org.apache.hadoop.yarn.webapp.hamlet;
import com.google.common.collect.Sets;
import java.io.IOException;
import java.io.PrintWriter;
import java.lang.annotation.Annotation;
import java.lang.reflect.Method;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.util.Set;
import java.util.regex.Pattern;
import org.apache.commons.cli.CommandLine;
import org.apache.commons.cli.GnuParser;
import org.apache.commons.cli.HelpFormatter;
import org.apache.commons.cli.Options;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.yarn.webapp.WebAppException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
@InterfaceAudience.LimitedPrivate()
public class HamletGen  else
}
String getTypeName(Type type)
void genFactoryMethod(String retName, String methodName, int indent)
void genNewElementMethod(String className, Method method, int indent)
boolean isInline(String container, String className)
void genCurElementMethod(String className, Method method, int indent)
static boolean needsEscaping(String eleName)
static void throwUnhandled(String className, Method method)
void echo(int indent, Object... args)
void indent(int indent)
void puts(int indent, Object... args)
boolean isElement(String s)
public static void main(String[] args) throws Exception
}
