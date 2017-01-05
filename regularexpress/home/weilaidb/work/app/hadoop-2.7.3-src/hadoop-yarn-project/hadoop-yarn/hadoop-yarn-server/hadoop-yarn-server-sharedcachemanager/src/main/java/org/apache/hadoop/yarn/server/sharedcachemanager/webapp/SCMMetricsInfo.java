package org.apache.hadoop.yarn.server.sharedcachemanager.webapp;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.server.sharedcachemanager.metrics.CleanerMetrics;
import org.apache.hadoop.yarn.server.sharedcachemanager.metrics.ClientSCMMetrics;
import org.apache.hadoop.yarn.server.sharedcachemanager.metrics.SharedCacheUploaderMetrics;
@XmlRootElement(name = "SCMMetrics")
@XmlAccessorType(XmlAccessType.FIELD)
@Private
@Unstable
public class SCMMetricsInfo
