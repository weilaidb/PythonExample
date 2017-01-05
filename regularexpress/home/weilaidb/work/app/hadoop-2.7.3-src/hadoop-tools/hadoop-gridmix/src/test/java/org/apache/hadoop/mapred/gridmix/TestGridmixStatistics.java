package org.apache.hadoop.mapred.gridmix;
import java.util.concurrent.CountDownLatch;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.gridmix.Statistics.ClusterStats;
import org.apache.hadoop.mapred.gridmix.Statistics.JobStats;
import org.apache.hadoop.mapreduce.InputSplit;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.JobID;
import org.apache.hadoop.mapreduce.JobStatus;
import org.apache.hadoop.mapreduce.TaskType;
import org.apache.hadoop.tools.rumen.JobStory;
import org.apache.hadoop.tools.rumen.TaskAttemptInfo;
import org.apache.hadoop.tools.rumen.TaskInfo;
import org.apache.hadoop.tools.rumen.Pre21JobHistoryConstants.Values;
import org.junit.Test;
import static org.junit.Assert.*;
public class TestGridmixStatistics
