package org.apache.hadoop.yarn.server.resourcemanager.webapp.dao;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlTransient;
import javax.xml.bind.annotation.XmlType;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.FSAppAttempt;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.FairScheduler;
@XmlRootElement(name = "fairScheduler")
@XmlType(name = "fairScheduler")
@XmlAccessorType(XmlAccessType.FIELD)
public class FairSchedulerInfo extends SchedulerInfo
