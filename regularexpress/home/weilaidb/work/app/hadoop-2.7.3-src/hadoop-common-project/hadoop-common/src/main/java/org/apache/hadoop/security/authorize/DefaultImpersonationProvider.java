package org.apache.hadoop.security.authorize;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;
import java.util.regex.Pattern;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.util.MachineList;
import com.google.common.annotations.VisibleForTesting;
@InterfaceStability.Unstable
@InterfaceAudience.Public
public class DefaultImpersonationProvider implements ImpersonationProvider
