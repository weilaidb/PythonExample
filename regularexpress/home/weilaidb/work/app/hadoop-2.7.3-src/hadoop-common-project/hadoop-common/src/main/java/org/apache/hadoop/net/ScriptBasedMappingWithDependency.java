package org.apache.hadoop.net;
import java.util.*;
import java.util.concurrent.ConcurrentHashMap;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class ScriptBasedMappingWithDependency  extends ScriptBasedMapping
implements DNSToSwitchMappingWithDependency
