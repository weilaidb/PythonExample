package org.apache.hadoop.yarn.server.api.protocolrecords;
import static org.junit.Assert.*;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.nio.ByteBuffer;
import org.apache.hadoop.yarn.factories.RecordFactory;
import org.apache.hadoop.yarn.factory.providers.RecordFactoryProvider;
import org.apache.hadoop.yarn.server.api.protocolrecords.impl.pb.RegisterNodeManagerResponsePBImpl;
import org.apache.hadoop.yarn.server.api.records.MasterKey;
import org.apache.hadoop.yarn.server.api.records.NodeAction;
import org.junit.Test;
import org.apache.hadoop.yarn.proto.YarnServerCommonServiceProtos.RegisterNodeManagerResponseProto;
public class TestRegisterNodeManagerResponse
