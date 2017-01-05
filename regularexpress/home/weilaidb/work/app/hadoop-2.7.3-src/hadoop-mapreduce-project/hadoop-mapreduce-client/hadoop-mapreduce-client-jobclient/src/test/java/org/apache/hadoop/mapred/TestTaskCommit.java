package org.apache.hadoop.mapred;
import java.io.File;
import java.io.IOException;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.ipc.ProtocolSignature;
import org.apache.hadoop.mapred.SortedRanges.Range;
import org.apache.hadoop.mapreduce.TaskType;
public class TestTaskCommit extends HadoopTestCase
