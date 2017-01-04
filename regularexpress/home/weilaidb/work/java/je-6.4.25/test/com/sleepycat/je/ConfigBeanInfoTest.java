package com.sleepycat.je;
import static org.junit.Assert.fail;
import java.beans.BeanInfo;
import java.beans.IntrospectionException;
import java.beans.Introspector;
import java.beans.PropertyDescriptor;
import java.lang.reflect.Method;
import org.junit.Test;
import com.sleepycat.util.test.TestBase;
public class ConfigBeanInfoTest extends TestBase
