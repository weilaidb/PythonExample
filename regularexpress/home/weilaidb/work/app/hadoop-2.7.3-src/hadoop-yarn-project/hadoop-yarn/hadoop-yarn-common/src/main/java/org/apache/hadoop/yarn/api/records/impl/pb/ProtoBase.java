package org.apache.hadoop.yarn.api.records.impl.pb;
import java.nio.ByteBuffer;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import com.google.protobuf.ByteString;
import com.google.protobuf.Message;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public abstract class ProtoBase <T extends Message>
