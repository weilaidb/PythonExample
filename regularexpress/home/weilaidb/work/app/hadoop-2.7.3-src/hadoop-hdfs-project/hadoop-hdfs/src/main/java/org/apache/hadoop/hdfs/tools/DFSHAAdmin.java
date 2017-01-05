package org.apache.hadoop.hdfs.tools;
import java.io.PrintStream;
import java.util.Arrays;
import java.util.Collection;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.ha.HAAdmin;
import org.apache.hadoop.ha.HAServiceTarget;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.util.ToolRunner;
public class DFSHAAdmin extends HAAdmin
