package org.apache.hadoop.mapreduce.lib.output;
import java.io.IOException;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.JobContext;
import org.apache.hadoop.mapreduce.OutputCommitter;
import org.apache.hadoop.mapreduce.TaskAttemptContext;
import org.apache.hadoop.mapreduce.TaskAttemptID;
import org.apache.hadoop.mapreduce.TaskID;
import org.apache.hadoop.mapreduce.task.annotation.Checkpointable;
import com.google.common.annotations.VisibleForTesting;
@Checkpointable
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class PartialFileOutputCommitter
extends FileOutputCommitter implements PartialOutputCommitter
