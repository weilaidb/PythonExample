package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.ContainerResourceIncreaseRequest;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerResourceIncreaseRequestProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerResourceIncreaseRequestProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceProto;
public class ContainerResourceIncreaseRequestPBImpl extends
ContainerResourceIncreaseRequest
