package org.apache.hadoop.yarn.server.nodemanager.containermanager;
import java.nio.ByteBuffer;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.event.AbstractEvent;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.container
.Container;
public class AuxServicesEvent extends AbstractEvent<AuxServicesEventType>
