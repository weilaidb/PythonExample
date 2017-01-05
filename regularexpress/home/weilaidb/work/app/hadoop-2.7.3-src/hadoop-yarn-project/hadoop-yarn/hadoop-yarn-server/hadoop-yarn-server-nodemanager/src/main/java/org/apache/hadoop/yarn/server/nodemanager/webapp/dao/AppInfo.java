package org.apache.hadoop.yarn.server.nodemanager.webapp.dao;
import java.util.ArrayList;
import java.util.Map;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.application.Application;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.container.Container;
import org.apache.hadoop.yarn.util.ConverterUtils;
@XmlRootElement(name = "app")
@XmlAccessorType(XmlAccessType.FIELD)
public class AppInfo
