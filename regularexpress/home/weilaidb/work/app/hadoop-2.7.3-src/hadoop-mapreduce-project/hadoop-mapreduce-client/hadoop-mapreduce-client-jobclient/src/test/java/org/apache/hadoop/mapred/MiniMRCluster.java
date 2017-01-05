package org.apache.hadoop.mapred;
import java.io.IOException;
import java.util.Random;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.security.AccessControlException;
import org.apache.hadoop.security.UserGroupInformation;
@Deprecated
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class MiniMRCluster
