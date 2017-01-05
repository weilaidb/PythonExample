package org.apache.hadoop.mapreduce.v2;
import org.junit.Assert;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import org.apache.hadoop.yarn.factories.RecordFactory;
import org.apache.hadoop.yarn.factories.impl.pb.RecordFactoryPBImpl;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.GetCountersRequest;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb.GetCountersRequestPBImpl;
import org.apache.hadoop.mapreduce.v2.api.records.CounterGroup;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.CounterGroupPBImpl;
import org.junit.Test;
public class TestRecordFactory
