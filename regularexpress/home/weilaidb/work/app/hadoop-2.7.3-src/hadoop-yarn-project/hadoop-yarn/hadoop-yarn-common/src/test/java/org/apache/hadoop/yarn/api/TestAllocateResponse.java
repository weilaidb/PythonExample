package org.apache.hadoop.yarn.api;
import java.util.ArrayList;
import java.util.List;
import org.apache.hadoop.yarn.api.protocolrecords.AllocateResponse;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.AllocateResponsePBImpl;
import org.apache.hadoop.yarn.api.records.AMCommand;
import org.apache.hadoop.yarn.api.records.Container;
import org.apache.hadoop.yarn.api.records.ContainerResourceDecrease;
import org.apache.hadoop.yarn.api.records.ContainerResourceIncrease;
import org.apache.hadoop.yarn.api.records.ContainerStatus;
import org.apache.hadoop.yarn.api.records.NMToken;
import org.apache.hadoop.yarn.api.records.NodeReport;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.AllocateResponseProto;
import org.junit.Assert;
import org.junit.Test;
public class TestAllocateResponse
