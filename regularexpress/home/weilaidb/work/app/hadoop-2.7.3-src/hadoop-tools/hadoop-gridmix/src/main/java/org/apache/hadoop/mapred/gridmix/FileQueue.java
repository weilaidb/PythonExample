package org.apache.hadoop.mapred.gridmix;
import java.io.IOException;
import java.io.InputStream;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.mapreduce.lib.input.CombineFileSplit;
class FileQueue extends InputStream
