package org.apache.hadoop.yarn.server.api.records.impl.pb;
import java.nio.ByteBuffer;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
import org.apache.hadoop.yarn.proto.YarnServerCommonProtos.MasterKeyProto;
import org.apache.hadoop.yarn.proto.YarnServerCommonProtos.MasterKeyProtoOrBuilder;
import org.apache.hadoop.yarn.server.api.records.MasterKey;
public class MasterKeyPBImpl extends ProtoBase<MasterKeyProto> implements
MasterKey
