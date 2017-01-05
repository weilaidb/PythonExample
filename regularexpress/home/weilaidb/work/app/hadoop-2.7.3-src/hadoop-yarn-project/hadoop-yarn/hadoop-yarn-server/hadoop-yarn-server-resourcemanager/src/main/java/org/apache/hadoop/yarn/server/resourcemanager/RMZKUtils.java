package org.apache.hadoop.yarn.server.resourcemanager;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.util.ZKUtil;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.zookeeper.data.ACL;
import java.util.Collections;
import java.util.List;
@InterfaceAudience.Private
public class RMZKUtils
