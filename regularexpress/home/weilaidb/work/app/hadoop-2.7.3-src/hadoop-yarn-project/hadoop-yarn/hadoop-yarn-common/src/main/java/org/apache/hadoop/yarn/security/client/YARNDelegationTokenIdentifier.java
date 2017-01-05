package org.apache.hadoop.yarn.security.client;
import java.io.DataInput;
import java.io.DataInputStream;
import java.io.DataOutput;
import java.io.DataOutputStream;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.token.delegation.AbstractDelegationTokenIdentifier;
import org.apache.hadoop.yarn.proto.YarnSecurityTokenProtos.YARNDelegationTokenIdentifierProto;
@Private
public abstract class YARNDelegationTokenIdentifier extends
AbstractDelegationTokenIdentifier
