package org.apache.hadoop.registry.server.integration;
import com.google.common.annotations.VisibleForTesting;
import org.apache.curator.framework.api.BackgroundCallback;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.registry.client.impl.zk.RegistryBindingSource;
import org.apache.hadoop.registry.client.types.yarn.PersistencePolicies;
import org.apache.hadoop.registry.server.services.DeleteCompletionCallback;
import org.apache.hadoop.registry.server.services.RegistryAdminService;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.io.IOException;
import java.util.concurrent.Future;
@InterfaceAudience.LimitedPrivate("YARN")
@InterfaceStability.Evolving
public class RMRegistryOperationsService extends RegistryAdminService
