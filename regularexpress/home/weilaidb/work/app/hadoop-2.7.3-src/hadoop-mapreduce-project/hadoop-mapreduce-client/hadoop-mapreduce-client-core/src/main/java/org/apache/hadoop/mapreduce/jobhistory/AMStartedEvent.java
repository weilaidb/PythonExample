package org.apache.hadoop.mapreduce.jobhistory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.util.ConverterUtils;
import org.apache.avro.util.Utf8;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class AMStartedEvent implements HistoryEvent
