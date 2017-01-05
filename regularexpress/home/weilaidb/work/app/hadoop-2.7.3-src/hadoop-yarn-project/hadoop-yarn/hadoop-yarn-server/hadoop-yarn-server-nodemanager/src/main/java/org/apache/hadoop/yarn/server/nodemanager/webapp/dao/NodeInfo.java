package org.apache.hadoop.yarn.server.nodemanager.webapp.dao;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.util.VersionInfo;
import org.apache.hadoop.yarn.server.nodemanager.Context;
import org.apache.hadoop.yarn.server.nodemanager.ResourceView;
import org.apache.hadoop.yarn.util.YarnVersionInfo;
@XmlRootElement
@XmlAccessorType(XmlAccessType.FIELD)
public class NodeInfo
