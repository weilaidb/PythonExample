package org.apache.hadoop.mapreduce.v2.api.records.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.records.AMInfo;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.AMInfoProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.AMInfoProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationAttemptIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationAttemptIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
public class AMInfoPBImpl extends ProtoBase<AMInfoProto> implements AMInfo
