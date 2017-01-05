package org.apache.hadoop.metrics2.impl;
import java.util.List;
import javax.management.MBeanAttributeInfo;
import javax.management.MBeanInfo;
import com.google.common.collect.Lists;
import org.apache.hadoop.metrics2.AbstractMetric;
import org.apache.hadoop.metrics2.MetricsInfo;
import org.apache.hadoop.metrics2.MetricsTag;
import org.apache.hadoop.metrics2.MetricsVisitor;
class MBeanInfoBuilder implements MetricsVisitor
