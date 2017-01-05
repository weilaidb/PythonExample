package org.apache.hadoop.tracing;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.tracing.SpanReceiverInfo.ConfigurationPair;
import org.apache.htrace.HTraceConfiguration;
@InterfaceAudience.Private
public class TraceUtils
