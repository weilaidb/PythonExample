package org.apache.hadoop.yarn.server.resourcemanager.webapp.dao;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlElementWrapper;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.yarn.api.records.ApplicationAccessType;
@XmlRootElement(name = "container-launch-context-info")
@XmlAccessorType(XmlAccessType.FIELD)
public class ContainerLaunchContextInfo
