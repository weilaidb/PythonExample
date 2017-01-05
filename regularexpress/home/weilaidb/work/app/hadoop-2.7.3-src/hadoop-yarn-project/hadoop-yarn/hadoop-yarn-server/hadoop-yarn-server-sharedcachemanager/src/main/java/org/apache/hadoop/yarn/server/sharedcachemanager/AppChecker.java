package org.apache.hadoop.yarn.server.sharedcachemanager;
import java.util.Collection;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.service.CompositeService;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.exceptions.YarnException;
@Private
@Evolving
public abstract class AppChecker extends CompositeService
