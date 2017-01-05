package org.apache.hadoop.hdfs.protocol.datatransfer;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.nio.ByteBuffer;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.protocol.proto.DataTransferProtos.PacketHeaderProto;
import org.apache.hadoop.hdfs.util.ByteBufferOutputStream;
import com.google.common.base.Preconditions;
import com.google.common.primitives.Shorts;
import com.google.common.primitives.Ints;
import com.google.protobuf.InvalidProtocolBufferException;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class PacketHeader
