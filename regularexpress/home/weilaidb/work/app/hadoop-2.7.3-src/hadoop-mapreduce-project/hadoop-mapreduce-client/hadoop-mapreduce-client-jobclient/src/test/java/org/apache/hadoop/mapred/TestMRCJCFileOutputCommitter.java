package org.apache.hadoop.mapred;
import java.io.*;
import java.net.URI;
import junit.framework.TestCase;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.io.*;
import org.apache.hadoop.mapred.JobContextImpl;
import org.apache.hadoop.mapred.TaskAttemptContextImpl;
import org.apache.hadoop.mapreduce.JobStatus;
public class TestMRCJCFileOutputCommitter extends TestCase
