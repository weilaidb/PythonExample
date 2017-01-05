package org.apache.hadoop.tracing;
import static org.junit.Assert.assertEquals;
import java.util.LinkedList;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.tracing.SpanReceiverInfo.ConfigurationPair;
import org.apache.htrace.HTraceConfiguration;
import org.junit.Test;
public class TestTraceUtils
