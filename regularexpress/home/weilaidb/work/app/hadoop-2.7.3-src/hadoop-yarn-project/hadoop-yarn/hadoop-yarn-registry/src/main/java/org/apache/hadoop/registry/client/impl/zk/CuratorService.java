package org.apache.hadoop.registry.client.impl.zk;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
import org.apache.curator.ensemble.EnsembleProvider;
import org.apache.curator.ensemble.fixed.FixedEnsembleProvider;
import org.apache.curator.framework.CuratorFramework;
import org.apache.curator.framework.CuratorFrameworkFactory;
import org.apache.curator.framework.api.BackgroundCallback;
import org.apache.curator.framework.api.CreateBuilder;
import org.apache.curator.framework.api.DeleteBuilder;
import org.apache.curator.framework.api.GetChildrenBuilder;
import org.apache.curator.retry.BoundedExponentialBackoffRetry;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileAlreadyExistsException;
import org.apache.hadoop.fs.PathIsNotEmptyDirectoryException;
import org.apache.hadoop.fs.PathNotFoundException;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.service.CompositeService;
import org.apache.hadoop.service.ServiceStateException;
import org.apache.hadoop.registry.client.api.RegistryConstants;
import org.apache.hadoop.registry.client.binding.RegistryPathUtils;
import org.apache.hadoop.registry.client.exceptions.AuthenticationFailedException;
import org.apache.hadoop.registry.client.exceptions.NoChildrenForEphemeralsException;
import org.apache.hadoop.registry.client.exceptions.NoPathPermissionsException;
import org.apache.hadoop.registry.client.exceptions.RegistryIOException;
import org.apache.zookeeper.CreateMode;
import org.apache.zookeeper.KeeperException;
import org.apache.zookeeper.ZooDefs;
import org.apache.zookeeper.data.ACL;
import org.apache.zookeeper.data.Stat;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.io.IOException;
import java.util.List;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class CuratorService extends CompositeService
implements RegistryConstants, RegistryBindingSource
