package org.apache.hadoop.security;
import java.io.IOException;
import java.util.LinkedList;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.util.Shell;
import org.apache.hadoop.util.Shell.ExitCodeException;
import org.apache.hadoop.security.NetgroupCache;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class ShellBasedUnixGroupsNetgroupMapping
extends ShellBasedUnixGroupsMapping
