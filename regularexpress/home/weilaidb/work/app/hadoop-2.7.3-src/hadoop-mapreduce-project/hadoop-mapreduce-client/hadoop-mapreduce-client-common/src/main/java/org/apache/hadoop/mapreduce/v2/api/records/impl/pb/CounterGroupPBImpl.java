package org.apache.hadoop.mapreduce.v2.api.records.impl.pb;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.mapreduce.v2.api.records.Counter;
import org.apache.hadoop.mapreduce.v2.api.records.CounterGroup;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.CounterGroupProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.CounterGroupProtoOrBuilder;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.CounterProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.StringCounterMapProto;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class CounterGroupPBImpl extends ProtoBase<CounterGroupProto> implements CounterGroup
