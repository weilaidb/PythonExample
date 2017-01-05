package org.apache.hadoop.yarn.exceptions;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.ApplicationHistoryProtocol;
import org.apache.hadoop.yarn.api.protocolrecords.GetContainerReportRequest;
@Public
@Unstable
public class ContainerNotFoundException extends YarnException
