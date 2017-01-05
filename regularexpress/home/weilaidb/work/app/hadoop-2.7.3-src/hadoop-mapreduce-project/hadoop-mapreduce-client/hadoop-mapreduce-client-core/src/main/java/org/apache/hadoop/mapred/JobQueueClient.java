package org.apache.hadoop.mapred;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.Writer;
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.mapreduce.JobStatus;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.util.ToolRunner;
import com.google.common.base.Charsets;
class JobQueueClient extends Configured implements Tool
