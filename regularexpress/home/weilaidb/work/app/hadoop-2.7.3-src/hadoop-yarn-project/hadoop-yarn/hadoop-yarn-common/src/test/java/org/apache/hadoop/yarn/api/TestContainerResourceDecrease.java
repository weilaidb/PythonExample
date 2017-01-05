package org.apache.hadoop.yarn.api;
import org.junit.Assert;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.ContainerResourceDecrease;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerResourceDecreasePBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerResourceDecreaseProto;
import org.junit.Test;
public class TestContainerResourceDecrease
