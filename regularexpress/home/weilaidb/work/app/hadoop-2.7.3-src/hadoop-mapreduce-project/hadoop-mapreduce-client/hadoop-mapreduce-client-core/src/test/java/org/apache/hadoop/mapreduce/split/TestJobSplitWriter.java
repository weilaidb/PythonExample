package org.apache.hadoop.mapreduce.split;
import static org.junit.Assert.assertEquals;
import java.io.File;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.JobID;
import org.apache.hadoop.mapreduce.MRConfig;
import org.apache.hadoop.mapreduce.lib.input.FileSplit;
import org.junit.Test;
public class TestJobSplitWriter
