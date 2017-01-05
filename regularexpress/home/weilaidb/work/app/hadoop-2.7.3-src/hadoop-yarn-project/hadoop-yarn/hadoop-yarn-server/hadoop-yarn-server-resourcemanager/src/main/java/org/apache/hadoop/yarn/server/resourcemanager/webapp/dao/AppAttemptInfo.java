package org.apache.hadoop.yarn.server.resourcemanager.webapp.dao;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.yarn.api.records.Container;
import org.apache.hadoop.yarn.server.resourcemanager.ResourceManager;
import org.apache.hadoop.yarn.server.resourcemanager.rmapp.attempt.RMAppAttempt;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.AbstractYarnScheduler;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.SchedulerApplicationAttempt;
import org.apache.hadoop.yarn.util.ConverterUtils;
import org.apache.hadoop.yarn.webapp.util.WebAppUtils;
@XmlRootElement(name = "appAttempt")
@XmlAccessorType(XmlAccessType.FIELD)
public class AppAttemptInfo
