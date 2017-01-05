package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.URL;
import org.apache.hadoop.yarn.proto.YarnProtos.URLProto;
import org.apache.hadoop.yarn.proto.YarnProtos.URLProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class URLPBImpl extends URL
