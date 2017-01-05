package org.apache.hadoop.yarn.server.resourcemanager.scheduler;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience.LimitedPrivate;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.server.resourcemanager.RMContext;
import org.apache.hadoop.yarn.server.resourcemanager.recovery.Recoverable;
@LimitedPrivate("yarn")
@Evolving
public interface ResourceScheduler extends YarnScheduler, Recoverable
