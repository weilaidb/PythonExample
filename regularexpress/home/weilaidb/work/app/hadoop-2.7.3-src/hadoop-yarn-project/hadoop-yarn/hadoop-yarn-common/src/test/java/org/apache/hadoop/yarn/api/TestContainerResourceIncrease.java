package org.apache.hadoop.yarn.api;
import java.util.Arrays;
import org.junit.Assert;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.ContainerResourceIncrease;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.api.records.Token;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerResourceIncreasePBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerResourceIncreaseProto;
import org.junit.Test;
public class TestContainerResourceIncrease
