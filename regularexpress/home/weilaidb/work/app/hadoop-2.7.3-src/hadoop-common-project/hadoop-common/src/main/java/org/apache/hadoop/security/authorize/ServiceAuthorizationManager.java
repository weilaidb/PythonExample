package org.apache.hadoop.security.authorize;
import java.io.IOException;
import java.net.InetAddress;
import java.util.IdentityHashMap;
import java.util.Map;
import java.util.Set;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.security.KerberosInfo;
import org.apache.hadoop.security.SecurityUtil;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.util.MachineList;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class ServiceAuthorizationManager
