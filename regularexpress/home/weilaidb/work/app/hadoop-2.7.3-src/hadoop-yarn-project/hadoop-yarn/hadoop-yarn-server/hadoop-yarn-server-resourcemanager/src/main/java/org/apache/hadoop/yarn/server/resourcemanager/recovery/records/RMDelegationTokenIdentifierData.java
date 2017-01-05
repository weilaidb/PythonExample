package org.apache.hadoop.yarn.server.resourcemanager.recovery.records;
import java.io.ByteArrayInputStream;
import java.io.DataInput;
import java.io.DataInputStream;
import java.io.IOException;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerRecoveryProtos.RMDelegationTokenIdentifierDataProto;
import org.apache.hadoop.yarn.security.client.RMDelegationTokenIdentifier;
import org.apache.hadoop.yarn.security.client.YARNDelegationTokenIdentifier;
public class RMDelegationTokenIdentifierData
