package org.apache.hadoop.mapreduce.lib.input;
import java.io.IOException;
import java.io.InputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.io.Text;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class UncompressedSplitLineReader extends SplitLineReader
