package org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair;
import java.io.IOException;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.security.Groups;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.w3c.dom.Element;
import org.w3c.dom.NamedNodeMap;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import com.google.common.annotations.VisibleForTesting;
@Private
@Unstable
public abstract class QueuePlacementRule
