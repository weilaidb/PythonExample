package com.sleepycat.je.rep.jmx;
import javax.management.MBeanException;
import javax.management.MBeanOperationInfo;
import javax.management.MBeanParameterInfo;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.Environment;
import com.sleepycat.je.jmx.JEMonitor;
import com.sleepycat.je.rep.ReplicatedEnvironment;
import com.sleepycat.je.rep.RepInternal;
public class RepJEMonitor extends JEMonitor
