package org.apache.hadoop.mapred;
import java.io.IOException;
import java.util.HashSet;
import java.util.Set;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.BlockLocation;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapred.lib.CombineFileSplit;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class MultiFileSplit extends CombineFileSplit
