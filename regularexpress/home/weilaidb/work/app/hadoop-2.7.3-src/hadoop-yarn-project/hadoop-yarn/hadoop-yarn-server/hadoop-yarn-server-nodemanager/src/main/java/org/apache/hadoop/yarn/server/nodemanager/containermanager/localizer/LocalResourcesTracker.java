package org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.yarn.api.records.LocalResourceVisibility;
import org.apache.hadoop.yarn.event.EventHandler;
import org.apache.hadoop.yarn.server.nodemanager.DeletionService;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer.event.ResourceEvent;
interface LocalResourcesTracker
extends EventHandler<ResourceEvent>, Iterable<LocalizedResource>
