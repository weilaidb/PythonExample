package org.apache.hadoop.mapred.gridmix;
import java.io.IOException;
import org.apache.commons.lang.time.FastDateFormat;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.MD5Hash;
import org.apache.hadoop.mapred.gridmix.GenerateData.DataStatistics;
import org.apache.hadoop.mapred.gridmix.Statistics.JobStats;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.util.StringUtils;
class ExecutionSummarizer implements StatListener<JobStats>
