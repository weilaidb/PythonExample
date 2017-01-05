package org.apache.hadoop.yarn.server.nodemanager.api.impl.pb;
import org.apache.hadoop.yarn.api.records.LocalResource;
import org.apache.hadoop.yarn.api.records.URL;
import org.apache.hadoop.yarn.api.records.impl.pb.LocalResourcePBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
import org.apache.hadoop.yarn.api.records.impl.pb.URLPBImpl;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.ResourceLocalizationSpecProto;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.ResourceLocalizationSpecProtoOrBuilder;
import org.apache.hadoop.yarn.server.nodemanager.api.ResourceLocalizationSpec;
public class ResourceLocalizationSpecPBImpl extends
ProtoBase<ResourceLocalizationSpecProto> implements
ResourceLocalizationSpec
