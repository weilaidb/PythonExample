package org.apache.hadoop.mapred.gridmix;
import org.apache.commons.lang.time.FastDateFormat;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.mapred.gridmix.Statistics.ClusterStats;
import org.apache.hadoop.mapreduce.server.jobtracker.JTConfig;
class ClusterSummarizer implements StatListener<ClusterStats>
