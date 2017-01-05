package org.apache.hadoop.registry.secure;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.service.ServiceOperations;
import org.apache.hadoop.registry.client.impl.zk.ZKPathDumper;
import org.apache.hadoop.registry.client.impl.zk.CuratorService;
import org.apache.hadoop.registry.client.impl.zk.RegistrySecurity;
import org.apache.zookeeper.CreateMode;
import org.apache.zookeeper.Login;
import org.apache.zookeeper.server.ZooKeeperSaslServer;
import org.apache.zookeeper.server.auth.SaslServerCallbackHandler;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import javax.security.auth.login.AppConfigurationEntry;
import javax.security.auth.login.LoginContext;
import static org.apache.hadoop.registry.client.api.RegistryConstants.*;
public class TestSecureRegistry extends AbstractSecureRegistryTest
