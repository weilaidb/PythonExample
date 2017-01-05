package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.api.records.ResourceOption;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceOptionProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceOptionProtoOrBuilder;
import com.google.common.base.Preconditions;
public class ResourceOptionPBImpl extends ResourceOption
