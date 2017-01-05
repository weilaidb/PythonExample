package org.apache.hadoop.mapred.gridmix;
import static org.junit.Assert.*;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.mapred.JobClient;
import org.apache.hadoop.mapred.UtilsForTests;
import org.apache.hadoop.mapred.gridmix.GenerateData.DataStatistics;
import org.apache.hadoop.mapred.gridmix.Statistics.ClusterStats;
import org.apache.hadoop.mapred.gridmix.Statistics.JobStats;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.server.jobtracker.JTConfig;
import org.apache.hadoop.tools.rumen.JobStory;
import org.apache.hadoop.tools.rumen.JobStoryProducer;
import org.junit.Test;
public class TestGridmixSummary
