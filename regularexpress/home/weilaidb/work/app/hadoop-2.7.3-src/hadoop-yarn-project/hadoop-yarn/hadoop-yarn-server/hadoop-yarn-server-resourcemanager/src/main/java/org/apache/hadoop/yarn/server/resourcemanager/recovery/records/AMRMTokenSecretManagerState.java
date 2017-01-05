package org.apache.hadoop.yarn.server.resourcemanager.recovery.records;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerRecoveryProtos.AMRMTokenSecretManagerStateProto;
import org.apache.hadoop.yarn.server.api.records.MasterKey;
import org.apache.hadoop.yarn.server.resourcemanager.security.AMRMTokenSecretManager;
import org.apache.hadoop.yarn.util.Records;
@Public
@Unstable
public abstract class AMRMTokenSecretManagerState
