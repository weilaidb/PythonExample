package org.apache.hadoop.mapreduce.v2.app.webapp.dao;
import java.util.ArrayList;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlTransient;
import org.apache.hadoop.mapreduce.CounterGroup;
import org.apache.hadoop.mapreduce.Counters;
import org.apache.hadoop.mapreduce.v2.app.job.Task;
import org.apache.hadoop.mapreduce.v2.util.MRApps;
@XmlRootElement(name = "jobTaskCounters")
@XmlAccessorType(XmlAccessType.FIELD)
public class JobTaskCounterInfo
