package org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer;
import java.util.concurrent.Future;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.security.Credentials;
import org.apache.hadoop.yarn.api.records.ContainerId;
import com.google.common.cache.LoadingCache;
public class LocalizerContext
