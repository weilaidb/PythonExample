package org.apache.hadoop.registry.server.services;
import com.google.common.base.Preconditions;
import org.apache.commons.lang.StringUtils;
import org.apache.curator.ensemble.fixed.FixedEnsembleProvider;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.service.AbstractService;
import org.apache.hadoop.registry.client.api.RegistryConstants;
import org.apache.hadoop.registry.client.impl.zk.BindingInformation;
import org.apache.hadoop.registry.client.impl.zk.RegistryBindingSource;
import org.apache.hadoop.registry.client.impl.zk.RegistryInternalConstants;
import org.apache.hadoop.registry.client.impl.zk.RegistrySecurity;
import org.apache.hadoop.registry.client.impl.zk.ZookeeperConfigOptions;
import org.apache.zookeeper.server.ServerCnxnFactory;
import org.apache.zookeeper.server.ZooKeeperServer;
import org.apache.zookeeper.server.persistence.FileTxnSnapLog;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.net.InetSocketAddress;
import java.net.UnknownHostException;
@InterfaceStability.Evolving
public class MicroZookeeperService
extends AbstractService
implements RegistryBindingSource, RegistryConstants,
ZookeeperConfigOptions,
MicroZookeeperServiceKeys
