package org.apache.hadoop.security.authorize;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.security.UserGroupInformation;
@InterfaceStability.Unstable
@InterfaceAudience.Public
public interface ImpersonationProvider  extends Configurable
