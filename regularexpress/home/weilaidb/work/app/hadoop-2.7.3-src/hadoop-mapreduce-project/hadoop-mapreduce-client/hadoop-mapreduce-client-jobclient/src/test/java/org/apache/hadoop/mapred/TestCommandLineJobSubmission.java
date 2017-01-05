package org.apache.hadoop.mapred;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import junit.framework.TestCase;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.util.ToolRunner;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.junit.Ignore;
@Ignore
public class TestCommandLineJobSubmission extends TestCase
