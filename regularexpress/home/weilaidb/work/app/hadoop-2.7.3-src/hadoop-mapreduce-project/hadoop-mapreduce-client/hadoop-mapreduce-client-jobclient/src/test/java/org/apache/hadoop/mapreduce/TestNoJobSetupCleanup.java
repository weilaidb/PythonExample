package org.apache.hadoop.mapreduce;
import java.io.File;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.PathFilter;
import org.apache.hadoop.fs.FileAlreadyExistsException;
import org.apache.hadoop.mapred.HadoopTestCase;
import org.apache.hadoop.mapreduce.lib.output.TextOutputFormat;
import org.apache.hadoop.mapreduce.task.TaskAttemptContextImpl;
import org.junit.Ignore;
@Ignore
public class TestNoJobSetupCleanup extends HadoopTestCase
