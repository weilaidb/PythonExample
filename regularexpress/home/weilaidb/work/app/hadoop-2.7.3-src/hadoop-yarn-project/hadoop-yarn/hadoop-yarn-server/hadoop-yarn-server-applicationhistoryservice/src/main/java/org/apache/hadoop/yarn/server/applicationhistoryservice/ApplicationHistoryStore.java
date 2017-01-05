package org.apache.hadoop.yarn.server.applicationhistoryservice;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.service.Service;
@InterfaceAudience.Public
@InterfaceStability.Unstable
public interface ApplicationHistoryStore extends Service,
ApplicationHistoryReader, ApplicationHistoryWriter
