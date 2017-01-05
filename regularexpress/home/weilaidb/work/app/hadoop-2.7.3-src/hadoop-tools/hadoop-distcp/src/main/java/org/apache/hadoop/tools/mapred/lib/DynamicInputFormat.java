package org.apache.hadoop.tools.mapred.lib;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.mapreduce.*;
import org.apache.hadoop.mapreduce.lib.input.FileSplit;
import org.apache.hadoop.tools.DistCpConstants;
import org.apache.hadoop.tools.util.DistCpUtils;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.SequenceFile;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.tools.CopyListingFileStatus;
import java.util.List;
import java.util.ArrayList;
import java.io.IOException;
public class DynamicInputFormat<K, V> extends InputFormat<K, V>
