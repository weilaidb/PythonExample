package org.apache.hadoop.net;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public abstract class AbstractDNSToSwitchMapping
implements DNSToSwitchMapping, Configurable
