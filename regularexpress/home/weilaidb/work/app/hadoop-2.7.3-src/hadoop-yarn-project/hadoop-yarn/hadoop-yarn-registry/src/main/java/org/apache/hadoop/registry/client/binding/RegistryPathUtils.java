package org.apache.hadoop.registry.client.binding;
import com.google.common.base.Preconditions;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.PathNotFoundException;
import org.apache.hadoop.registry.client.exceptions.InvalidPathnameException;
import org.apache.hadoop.registry.client.impl.zk.RegistryInternalConstants;
import org.apache.zookeeper.common.PathUtils;
import java.net.IDN;
import java.util.ArrayList;
import java.util.List;
import java.util.regex.Pattern;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class RegistryPathUtils
