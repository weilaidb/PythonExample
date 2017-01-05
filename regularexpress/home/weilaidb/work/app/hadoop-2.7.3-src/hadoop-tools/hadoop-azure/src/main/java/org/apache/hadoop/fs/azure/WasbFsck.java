package org.apache.hadoop.fs.azure;
import java.io.IOException;
import java.util.Arrays;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.util.ToolRunner;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class WasbFsck extends Configured implements Tool
