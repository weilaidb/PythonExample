package org.apache.hadoop.yarn.util;
import java.util.ArrayList;
import java.util.Collection;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.ha.HAServiceProtocol;
import org.apache.hadoop.ha.HAServiceProtocol.HAServiceState;
import org.apache.hadoop.ha.HAServiceTarget;
import org.apache.hadoop.yarn.client.RMHAServiceTarget;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
@Private
@Unstable
public class RMHAUtils
