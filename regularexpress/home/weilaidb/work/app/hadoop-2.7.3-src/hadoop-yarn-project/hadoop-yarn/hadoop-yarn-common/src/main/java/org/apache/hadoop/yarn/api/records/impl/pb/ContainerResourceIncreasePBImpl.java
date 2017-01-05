package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.security.proto.SecurityProtos.TokenProto;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.ContainerResourceIncrease;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.api.records.Token;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerResourceIncreaseProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerResourceIncreaseProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceProto;
public class ContainerResourceIncreasePBImpl extends ContainerResourceIncrease
