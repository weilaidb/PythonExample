package org.apache.hadoop.yarn.server.resourcemanager;
import java.io.DataInput;
import java.io.DataInputStream;
import java.io.DataOutput;
import java.io.DataOutputStream;
import java.io.IOException;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.yarn.proto.YarnSecurityTestClientAMTokenProtos.RMDelegationTokenIdentifierForTestProto;
import org.apache.hadoop.yarn.security.client.RMDelegationTokenIdentifier;
public class RMDelegationTokenIdentifierForTest extends
RMDelegationTokenIdentifier
