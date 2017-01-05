package org.apache.hadoop.mapreduce.v2.hs.webapp.dao;
import static org.apache.hadoop.yarn.util.StringHelper.join;
import static org.apache.hadoop.yarn.util.StringHelper.ujoin;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlTransient;
import org.apache.hadoop.mapreduce.v2.api.records.AMInfo;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.NodeId;
@XmlRootElement(name = "jobAttempt")
@XmlAccessorType(XmlAccessType.FIELD)
public class AMAttemptInfo
