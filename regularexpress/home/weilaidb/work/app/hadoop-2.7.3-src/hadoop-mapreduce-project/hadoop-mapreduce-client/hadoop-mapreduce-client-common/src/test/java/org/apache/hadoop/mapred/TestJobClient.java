package org.apache.hadoop.mapred;
import java.io.File;
import java.io.IOException;
import java.util.Collection;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapred.ClusterStatus.BlackListInfo;
import org.apache.hadoop.mapreduce.MRConfig;
import org.apache.hadoop.mapreduce.server.jobtracker.JTConfig;
import org.junit.After;
import org.junit.Assert;
import org.junit.Test;
public class TestJobClient
