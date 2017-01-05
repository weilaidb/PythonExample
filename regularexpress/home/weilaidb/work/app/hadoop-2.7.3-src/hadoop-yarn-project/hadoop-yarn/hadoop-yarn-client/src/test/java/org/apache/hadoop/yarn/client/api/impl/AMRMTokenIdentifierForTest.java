package org.apache.hadoop.yarn.client.api.impl;
import java.io.DataInput;
import java.io.DataInputStream;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.commons.io.IOUtils;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationAttemptIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.NodeIdPBImpl;
import org.apache.hadoop.yarn.proto.YarnSecurityTestAMRMTokenProtos.AMRMTokenIdentifierForTestProto;
import org.apache.hadoop.yarn.security.AMRMTokenIdentifier;
import com.google.protobuf.TextFormat;
public class AMRMTokenIdentifierForTest extends AMRMTokenIdentifier
