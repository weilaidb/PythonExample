package org.apache.hadoop.yarn.server.resourcemanager.webapp.dao;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.FairScheduler;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.FSLeafQueue;
@XmlRootElement
@XmlAccessorType(XmlAccessType.FIELD)
public class FairSchedulerLeafQueueInfo extends FairSchedulerQueueInfo
