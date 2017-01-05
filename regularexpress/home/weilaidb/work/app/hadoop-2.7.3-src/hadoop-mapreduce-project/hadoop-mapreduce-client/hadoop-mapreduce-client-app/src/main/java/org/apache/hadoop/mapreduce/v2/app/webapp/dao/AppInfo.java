package org.apache.hadoop.mapreduce.v2.app.webapp.dao;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.mapreduce.v2.app.AppContext;
import org.apache.hadoop.mapreduce.v2.app.webapp.App;
import org.apache.hadoop.yarn.util.Times;
@XmlRootElement(name = "info")
@XmlAccessorType(XmlAccessType.FIELD)
public class AppInfo
