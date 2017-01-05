package org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer.event;
import java.util.Collection;
import java.util.Map;
import org.apache.hadoop.yarn.api.records.LocalResourceVisibility;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.container.Container;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.container.ContainerImpl;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer.LocalResourceRequest;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer.ResourceLocalizationService;
public class ContainerLocalizationRequestEvent extends
ContainerLocalizationEvent
