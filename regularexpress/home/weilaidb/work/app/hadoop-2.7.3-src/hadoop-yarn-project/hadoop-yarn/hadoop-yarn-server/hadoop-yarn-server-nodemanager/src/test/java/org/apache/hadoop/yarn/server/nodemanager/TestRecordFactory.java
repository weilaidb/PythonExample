package org.apache.hadoop.yarn.server.nodemanager;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import org.apache.hadoop.yarn.factories.RecordFactory;
import org.apache.hadoop.yarn.factories.impl.pb.RecordFactoryPBImpl;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.LocalizerHeartbeatResponse;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.impl.pb.LocalizerHeartbeatResponsePBImpl;
import org.junit.Test;
import org.junit.Assert;
public class TestRecordFactory
