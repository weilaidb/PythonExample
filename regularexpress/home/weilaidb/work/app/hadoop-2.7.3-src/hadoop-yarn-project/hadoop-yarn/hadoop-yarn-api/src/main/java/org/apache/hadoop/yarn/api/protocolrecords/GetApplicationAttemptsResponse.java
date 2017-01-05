package org.apache.hadoop.yarn.api.protocolrecords;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.ApplicationHistoryProtocol;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptReport;
import org.apache.hadoop.yarn.util.Records;
@Public
@Unstable
public abstract class GetApplicationAttemptsResponse
