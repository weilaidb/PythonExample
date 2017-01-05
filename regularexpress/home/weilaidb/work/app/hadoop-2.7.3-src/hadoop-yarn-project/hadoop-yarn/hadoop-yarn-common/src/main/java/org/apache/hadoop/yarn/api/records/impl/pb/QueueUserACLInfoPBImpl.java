package org.apache.hadoop.yarn.api.records.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.QueueACL;
import org.apache.hadoop.yarn.api.records.QueueUserACLInfo;
import org.apache.hadoop.yarn.proto.YarnProtos.QueueACLProto;
import org.apache.hadoop.yarn.proto.YarnProtos.QueueUserACLInfoProto;
import org.apache.hadoop.yarn.proto.YarnProtos.QueueUserACLInfoProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class QueueUserACLInfoPBImpl extends QueueUserACLInfo
