package org.apache.hadoop.ha;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import java.util.Collections;
import java.util.UUID;
import org.apache.commons.logging.impl.Log4JLogger;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.ha.ActiveStandbyElector.ActiveStandbyElectorCallback;
import org.apache.hadoop.ha.ActiveStandbyElector.State;
import org.apache.hadoop.util.ZKUtil.ZKAuthInfo;
import org.apache.log4j.Level;
import org.apache.zookeeper.ZooDefs.Ids;
import org.apache.zookeeper.server.ZooKeeperServer;
import org.junit.Test;
import org.mockito.AdditionalMatchers;
import org.mockito.Mockito;
import com.google.common.primitives.Ints;
public class TestActiveStandbyElectorRealZK extends ClientBaseWithFixes
