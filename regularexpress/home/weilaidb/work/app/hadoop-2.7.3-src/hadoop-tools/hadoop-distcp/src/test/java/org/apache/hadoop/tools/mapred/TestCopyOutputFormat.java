package org.apache.hadoop.tools.mapred;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.mapreduce.*;
import org.apache.hadoop.mapreduce.task.TaskAttemptContextImpl;
import org.apache.hadoop.mapreduce.task.JobContextImpl;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.tools.DistCpConstants;
import org.junit.Test;
import org.junit.Assert;
import java.io.IOException;
public class TestCopyOutputFormat
