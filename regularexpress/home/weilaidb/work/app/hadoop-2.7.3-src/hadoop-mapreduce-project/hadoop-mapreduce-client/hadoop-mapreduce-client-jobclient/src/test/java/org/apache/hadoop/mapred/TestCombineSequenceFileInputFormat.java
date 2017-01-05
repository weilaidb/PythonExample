package org.apache.hadoop.mapred;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import java.io.IOException;
import java.util.BitSet;
import java.util.Random;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.BytesWritable;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.SequenceFile;
import org.apache.hadoop.mapred.lib.CombineFileSplit;
import org.apache.hadoop.mapred.lib.CombineSequenceFileInputFormat;
import org.junit.Test;
public class TestCombineSequenceFileInputFormat
