package org.apache.hadoop.yarn.server.webapp.dao;
import static org.apache.hadoop.yarn.util.StringHelper.CSV_JOINER;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.yarn.api.records.ApplicationReport;
import org.apache.hadoop.yarn.api.records.FinalApplicationStatus;
import org.apache.hadoop.yarn.api.records.YarnApplicationState;
import org.apache.hadoop.yarn.util.Times;
@Public
@Evolving
@XmlRootElement(name = "app")
@XmlAccessorType(XmlAccessType.FIELD)
public class AppInfo
