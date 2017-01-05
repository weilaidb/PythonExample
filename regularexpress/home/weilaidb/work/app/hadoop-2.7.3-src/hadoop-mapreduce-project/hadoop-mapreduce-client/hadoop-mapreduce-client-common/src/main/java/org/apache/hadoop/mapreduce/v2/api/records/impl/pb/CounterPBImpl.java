package org.apache.hadoop.mapreduce.v2.api.records.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.records.Counter;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.CounterProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.CounterProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class CounterPBImpl extends ProtoBase<CounterProto> implements Counter
