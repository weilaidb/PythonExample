package org.apache.hadoop.metrics.util;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import javax.management.Attribute;
import javax.management.AttributeList;
import javax.management.AttributeNotFoundException;
import javax.management.DynamicMBean;
import javax.management.InvalidAttributeValueException;
import javax.management.MBeanAttributeInfo;
import javax.management.MBeanException;
import javax.management.MBeanInfo;
import javax.management.MBeanOperationInfo;
import javax.management.ReflectionException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.metrics.MetricsUtil;
@InterfaceAudience.LimitedPrivate()
public abstract class MetricsDynamicMBeanBase implements DynamicMBean
