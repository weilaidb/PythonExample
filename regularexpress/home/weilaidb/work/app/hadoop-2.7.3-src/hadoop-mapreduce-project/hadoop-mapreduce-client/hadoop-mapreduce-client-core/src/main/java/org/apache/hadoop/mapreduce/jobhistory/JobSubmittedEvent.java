package org.apache.hadoop.mapreduce.jobhistory;
import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapreduce.JobACL;
import org.apache.hadoop.mapreduce.JobID;
import org.apache.hadoop.security.authorize.AccessControlList;
import org.apache.avro.util.Utf8;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class JobSubmittedEvent implements HistoryEvent
