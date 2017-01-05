package org.apache.hadoop.yarn.server.resourcemanager.webapp.dao;
import java.net.URI;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.yarn.api.records.LocalResourceType;
import org.apache.hadoop.yarn.api.records.LocalResourceVisibility;
@XmlRootElement(name = "localresources")
@XmlAccessorType(XmlAccessType.FIELD)
public class LocalResourceInfo
