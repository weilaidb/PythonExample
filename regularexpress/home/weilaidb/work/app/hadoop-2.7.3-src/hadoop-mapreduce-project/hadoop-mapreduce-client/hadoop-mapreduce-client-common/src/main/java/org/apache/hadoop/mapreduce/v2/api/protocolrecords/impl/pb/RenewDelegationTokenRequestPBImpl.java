package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.RenewDelegationTokenRequest;
import org.apache.hadoop.security.proto.SecurityProtos.RenewDelegationTokenRequestProto;
import org.apache.hadoop.security.proto.SecurityProtos.RenewDelegationTokenRequestProtoOrBuilder;
import org.apache.hadoop.security.proto.SecurityProtos.TokenProto;
import org.apache.hadoop.yarn.api.records.Token;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
import org.apache.hadoop.yarn.api.records.impl.pb.TokenPBImpl;
public class RenewDelegationTokenRequestPBImpl extends
ProtoBase<RenewDelegationTokenRequestProto> implements
RenewDelegationTokenRequest
