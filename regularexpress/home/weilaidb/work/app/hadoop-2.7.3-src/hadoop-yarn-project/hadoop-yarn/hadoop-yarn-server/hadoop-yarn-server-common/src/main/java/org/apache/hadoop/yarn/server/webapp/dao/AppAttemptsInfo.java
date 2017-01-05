package org.apache.hadoop.yarn.server.webapp.dao;
import java.util.ArrayList;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
@Public
@Evolving
@XmlRootElement(name = "appAttempts")
@XmlAccessorType(XmlAccessType.FIELD)
public class AppAttemptsInfo
