package org.apache.hadoop.metrics.util;
import java.lang.management.ManagementFactory;
import javax.management.InstanceNotFoundException;
import javax.management.MBeanServer;
import javax.management.MalformedObjectNameException;
import javax.management.ObjectName;
import javax.management.InstanceAlreadyExistsException;
import org.apache.hadoop.classification.InterfaceAudience;
@InterfaceAudience.LimitedPrivate()
public class MBeanUtil
