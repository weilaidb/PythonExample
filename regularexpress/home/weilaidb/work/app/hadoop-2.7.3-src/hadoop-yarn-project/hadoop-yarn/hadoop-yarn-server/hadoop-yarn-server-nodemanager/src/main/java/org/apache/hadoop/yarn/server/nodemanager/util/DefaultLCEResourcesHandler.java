package org.apache.hadoop.yarn.server.nodemanager.util;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.server.nodemanager.LinuxContainerExecutor;
public class DefaultLCEResourcesHandler implements LCEResourcesHandler
