package org.apache.hadoop.mapred;
import java.io.IOException;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.Path;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class FileOutputCommitter extends OutputCommitter
