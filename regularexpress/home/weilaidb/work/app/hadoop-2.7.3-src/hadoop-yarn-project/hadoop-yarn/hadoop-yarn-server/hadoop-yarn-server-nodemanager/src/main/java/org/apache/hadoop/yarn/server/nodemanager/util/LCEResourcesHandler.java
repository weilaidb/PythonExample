package org.apache.hadoop.yarn.server.nodemanager.util;
import java.io.IOException;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.server.nodemanager.LinuxContainerExecutor;
public interface LCEResourcesHandler extends Configurable
