package org.apache.hadoop.mapred.jobcontrol;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.JobClient;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.JobID;
import org.apache.hadoop.mapreduce.lib.jobcontrol.ControlledJob;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class Job extends ControlledJob
