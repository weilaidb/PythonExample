package org.apache.hadoop.yarn.sls.scheduler;
import java.util.concurrent.Delayed;
import java.util.concurrent.TimeUnit;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.Resource;
@Private
@Unstable
public class ContainerSimulator implements Delayed
