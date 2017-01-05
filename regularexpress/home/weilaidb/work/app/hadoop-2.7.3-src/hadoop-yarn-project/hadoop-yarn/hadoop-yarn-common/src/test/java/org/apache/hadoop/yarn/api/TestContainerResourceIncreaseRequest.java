package org.apache.hadoop.yarn.api;
import org.junit.Assert;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.ContainerResourceIncreaseRequest;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerResourceIncreaseRequestPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerResourceIncreaseRequestProto;
import org.junit.Test;
public class TestContainerResourceIncreaseRequest
