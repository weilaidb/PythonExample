package org.apache.hadoop.yarn.api.records.timeline;
import java.util.HashMap;
import java.util.Map;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
@XmlRootElement(name = "event")
@XmlAccessorType(XmlAccessType.NONE)
@Public
@Evolving
public class TimelineEvent implements Comparable<TimelineEvent>
