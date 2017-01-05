package org.apache.hadoop.yarn.server.webapp.dao;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptReport;
import org.apache.hadoop.yarn.api.records.YarnApplicationAttemptState;
@Public
@Evolving
@XmlRootElement(name = "appAttempt")
@XmlAccessorType(XmlAccessType.FIELD)
public class AppAttemptInfo
