package org.apache.hadoop.mapreduce.v2.app.webapp.dao;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.mapreduce.v2.api.records.TaskType;
import org.apache.hadoop.mapreduce.v2.app.job.TaskAttempt;
import org.apache.hadoop.yarn.util.Times;
@XmlRootElement(name = "taskAttempt")
@XmlAccessorType(XmlAccessType.FIELD)
public class ReduceTaskAttemptInfo extends TaskAttemptInfo
