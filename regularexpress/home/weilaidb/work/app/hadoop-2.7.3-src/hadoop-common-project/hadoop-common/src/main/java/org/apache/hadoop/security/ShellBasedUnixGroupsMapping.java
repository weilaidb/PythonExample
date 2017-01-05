package org.apache.hadoop.security;
import java.io.IOException;
import java.util.LinkedList;
import java.util.List;
import java.util.StringTokenizer;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.util.Shell;
import org.apache.hadoop.util.Shell.ExitCodeException;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class ShellBasedUnixGroupsMapping
implements GroupMappingServiceProvider
