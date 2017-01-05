package org.apache.hadoop.yarn.server.resourcemanager.security;
import java.io.DataInput;
import java.io.DataInputStream;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.commons.io.IOUtils;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationAttemptIdPBImpl;
import org.apache.hadoop.yarn.security.client.ClientToAMTokenIdentifier;
import org.apache.hadoop.yarn.proto.YarnSecurityTestClientAMTokenProtos.ClientToAMTokenIdentifierForTestProto;
import com.google.protobuf.TextFormat;
public class ClientToAMTokenIdentifierForTest extends ClientToAMTokenIdentifier
