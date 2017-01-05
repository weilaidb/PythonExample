package org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.impl.pb;
import org.apache.hadoop.yarn.api.records.LocalResource;
import org.apache.hadoop.yarn.api.records.SerializedException;
import org.apache.hadoop.yarn.api.records.URL;
import org.apache.hadoop.yarn.api.records.impl.pb.LocalResourcePBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
import org.apache.hadoop.yarn.api.records.impl.pb.SerializedExceptionPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.URLPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.LocalResourceProto;
import org.apache.hadoop.yarn.proto.YarnProtos.SerializedExceptionProto;
import org.apache.hadoop.yarn.proto.YarnProtos.URLProto;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.LocalResourceStatusProto;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.LocalResourceStatusProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.ResourceStatusTypeProto;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.LocalResourceStatus;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.ResourceStatusType;
public class LocalResourceStatusPBImpl
extends ProtoBase<LocalResourceStatusProto> implements LocalResourceStatus
