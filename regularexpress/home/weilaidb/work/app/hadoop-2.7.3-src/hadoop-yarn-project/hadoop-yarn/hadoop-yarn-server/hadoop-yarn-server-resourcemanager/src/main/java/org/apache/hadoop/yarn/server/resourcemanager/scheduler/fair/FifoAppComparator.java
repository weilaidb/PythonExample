package org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair;
import java.io.Serializable;
import java.util.Comparator;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
@Private
@Unstable
public class FifoAppComparator implements Comparator<FSAppAttempt>, Serializable
