package org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.LocalizerActionProto;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.LocalizerHeartbeatResponseProto;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.LocalizerHeartbeatResponseProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.ResourceLocalizationSpecProto;
import org.apache.hadoop.yarn.server.nodemanager.api.ResourceLocalizationSpec;
import org.apache.hadoop.yarn.server.nodemanager.api.impl.pb.ResourceLocalizationSpecPBImpl;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.LocalizerAction;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.LocalizerHeartbeatResponse;
public class LocalizerHeartbeatResponsePBImpl
extends ProtoBase<LocalizerHeartbeatResponseProto>
implements LocalizerHeartbeatResponse
