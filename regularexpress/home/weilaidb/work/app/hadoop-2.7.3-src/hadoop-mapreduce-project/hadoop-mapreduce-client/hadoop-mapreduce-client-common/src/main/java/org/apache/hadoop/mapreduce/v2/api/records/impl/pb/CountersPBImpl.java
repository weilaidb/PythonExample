package org.apache.hadoop.mapreduce.v2.api.records.impl.pb;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.mapreduce.v2.api.records.Counter;
import org.apache.hadoop.mapreduce.v2.api.records.CounterGroup;
import org.apache.hadoop.mapreduce.v2.api.records.Counters;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.CounterGroupProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.CountersProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.CountersProtoOrBuilder;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.StringCounterGroupMapProto;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class CountersPBImpl extends ProtoBase<CountersProto> implements Counters
