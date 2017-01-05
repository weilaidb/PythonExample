package org.apache.hadoop.yarn.server.sharedcachemanager.store;
import java.util.Collection;
import java.util.HashSet;
import java.util.Set;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.service.CompositeService;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import org.apache.hadoop.yarn.server.sharedcachemanager.AppChecker;
import com.google.common.annotations.VisibleForTesting;
@Private
@Evolving
public abstract class SCMStore extends CompositeService
