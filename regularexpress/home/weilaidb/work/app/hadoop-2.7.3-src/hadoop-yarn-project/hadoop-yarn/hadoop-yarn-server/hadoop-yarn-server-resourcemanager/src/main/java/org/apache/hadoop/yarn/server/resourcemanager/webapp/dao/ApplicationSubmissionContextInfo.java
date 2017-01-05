package org.apache.hadoop.yarn.server.resourcemanager.webapp.dao;
import java.util.HashSet;
import java.util.Set;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlElementWrapper;
import javax.xml.bind.annotation.XmlRootElement;
import org.apache.hadoop.yarn.api.records.Priority;
@XmlRootElement(name = "application-submission-context")
@XmlAccessorType(XmlAccessType.FIELD)
public class ApplicationSubmissionContextInfo
