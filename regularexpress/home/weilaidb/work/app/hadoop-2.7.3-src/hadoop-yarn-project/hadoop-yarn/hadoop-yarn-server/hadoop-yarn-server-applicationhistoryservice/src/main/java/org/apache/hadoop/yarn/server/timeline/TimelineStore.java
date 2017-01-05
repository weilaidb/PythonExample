package org.apache.hadoop.yarn.server.timeline;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.service.Service;
import org.apache.hadoop.yarn.api.records.timeline.TimelineEntity;
@Private
@Unstable
public interface TimelineStore extends
Service, TimelineReader, TimelineWriter
