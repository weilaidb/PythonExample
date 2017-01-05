package org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Queue;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import com.google.common.annotations.VisibleForTesting;
public class LocalCacheDirectoryManager
