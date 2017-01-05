package org.apache.hadoop.yarn.api;
import java.util.ArrayList;
import java.util.List;
import org.junit.Assert;
import org.apache.hadoop.yarn.api.protocolrecords.AllocateRequest;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.AllocateRequestPBImpl;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.api.records.ContainerResourceIncreaseRequest;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.AllocateRequestProto;
import org.junit.Test;
public class TestAllocateRequest
