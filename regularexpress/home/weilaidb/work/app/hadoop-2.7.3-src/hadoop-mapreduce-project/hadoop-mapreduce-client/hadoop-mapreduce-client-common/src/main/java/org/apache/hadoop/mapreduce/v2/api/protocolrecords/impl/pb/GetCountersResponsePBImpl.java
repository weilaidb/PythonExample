package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.GetCountersResponse;
import org.apache.hadoop.mapreduce.v2.api.records.Counters;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.CountersPBImpl;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.CountersProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetCountersResponseProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetCountersResponseProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class GetCountersResponsePBImpl extends ProtoBase<GetCountersResponseProto> implements GetCountersResponse
