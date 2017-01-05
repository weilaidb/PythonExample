package org.apache.hadoop.mapreduce.v2.app.webapp.dao;
import java.util.ArrayList;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.mapreduce.Counter;
import org.apache.hadoop.mapreduce.CounterGroup;
@XmlRootElement(name = "counterGroup")
@XmlAccessorType(XmlAccessType.FIELD)
public class CounterGroupInfo
