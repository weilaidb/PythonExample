package org.apache.hadoop.yarn.api.records.impl.pb;
import java.nio.ByteBuffer;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.security.proto.SecurityProtos.TokenProto;
import org.apache.hadoop.security.proto.SecurityProtos.TokenProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.Token;
import com.google.protobuf.ByteString;
@Private
@Unstable
public class TokenPBImpl extends Token
