package org.apache.hadoop.yarn.server.resourcemanager.webapp.dao;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.ha.HAServiceProtocol;
import org.apache.hadoop.service.Service.STATE;
import org.apache.hadoop.util.VersionInfo;
import org.apache.hadoop.yarn.server.resourcemanager.ResourceManager;
import org.apache.hadoop.yarn.server.resourcemanager.recovery.RMStateStore;
import org.apache.hadoop.yarn.util.YarnVersionInfo;
@XmlRootElement
@XmlAccessorType(XmlAccessType.FIELD)
public class ClusterInfo
