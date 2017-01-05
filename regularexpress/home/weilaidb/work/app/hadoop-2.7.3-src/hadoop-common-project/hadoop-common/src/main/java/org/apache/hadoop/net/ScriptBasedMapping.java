package org.apache.hadoop.net;
import java.util.*;
import java.io.*;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.util.Shell.ShellCommandExecutor;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class ScriptBasedMapping extends CachedDNSToSwitchMapping
