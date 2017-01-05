package org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer.sharedcache;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.yarn.api.records.ContainerLaunchContext;
import org.apache.hadoop.yarn.event.AbstractEvent;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer.LocalResourceRequest;
@Private
@Unstable
public class SharedCacheUploadEvent extends
AbstractEvent<SharedCacheUploadEventType>
