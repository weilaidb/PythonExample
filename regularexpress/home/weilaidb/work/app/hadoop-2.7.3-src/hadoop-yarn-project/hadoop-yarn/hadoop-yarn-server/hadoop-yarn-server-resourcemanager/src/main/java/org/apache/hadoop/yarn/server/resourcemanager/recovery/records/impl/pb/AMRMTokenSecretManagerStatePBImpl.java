package org.apache.hadoop.yarn.server.resourcemanager.recovery.records.impl.pb;
import org.apache.hadoop.yarn.proto.YarnServerCommonProtos.MasterKeyProto;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerRecoveryProtos.AMRMTokenSecretManagerStateProto;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerRecoveryProtos.AMRMTokenSecretManagerStateProtoOrBuilder;
import org.apache.hadoop.yarn.server.api.records.MasterKey;
import org.apache.hadoop.yarn.server.api.records.impl.pb.MasterKeyPBImpl;
import org.apache.hadoop.yarn.server.resourcemanager.recovery.records.AMRMTokenSecretManagerState;
public class AMRMTokenSecretManagerStatePBImpl extends AMRMTokenSecretManagerState
