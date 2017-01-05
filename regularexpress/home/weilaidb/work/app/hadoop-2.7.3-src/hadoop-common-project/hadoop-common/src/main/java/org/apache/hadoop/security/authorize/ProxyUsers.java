package org.apache.hadoop.security.authorize;
import com.google.common.base.Preconditions;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeysPublic;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.util.ReflectionUtils;
import com.google.common.annotations.VisibleForTesting;
@InterfaceStability.Unstable
@InterfaceAudience.LimitedPrivate()
public class ProxyUsers
