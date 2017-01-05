package org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.LocalResourceStatusProto;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.LocalizerStatusProto;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.LocalizerStatusProtoOrBuilder;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.LocalResourceStatus;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.LocalizerStatus;
public class LocalizerStatusPBImpl
extends ProtoBase<LocalizerStatusProto> implements LocalizerStatus
