package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.ContainerResourceDecrease;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerResourceDecreaseProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerResourceDecreaseProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceProto;
public class ContainerResourceDecreasePBImpl extends ContainerResourceDecrease
