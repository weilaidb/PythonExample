package org.apache.hadoop.mapreduce.v2.app.webapp.dao;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Map;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileContext;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.v2.app.job.Job;
@XmlRootElement(name = "conf")
@XmlAccessorType(XmlAccessType.FIELD)
public class ConfInfo
