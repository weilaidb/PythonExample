package org.apache.hadoop.mapred.lib;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.mapred.*;
import org.apache.hadoop.util.Progressable;
import java.io.IOException;
import java.util.*;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class MultipleOutputs
