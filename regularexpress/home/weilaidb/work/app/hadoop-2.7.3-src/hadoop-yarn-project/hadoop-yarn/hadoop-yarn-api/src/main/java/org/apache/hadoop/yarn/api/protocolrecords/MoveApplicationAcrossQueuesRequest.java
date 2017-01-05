package org.apache.hadoop.yarn.api.protocolrecords;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.ApplicationClientProtocol;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.util.Records;
@Public
@Unstable
public abstract class MoveApplicationAcrossQueuesRequest
