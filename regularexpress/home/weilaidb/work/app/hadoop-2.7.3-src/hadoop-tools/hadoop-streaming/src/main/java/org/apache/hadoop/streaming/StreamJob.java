package org.apache.hadoop.streaming;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import java.util.regex.Pattern;
import java.util.TreeMap;
import java.util.TreeSet;
import org.apache.commons.cli.BasicParser;
import org.apache.commons.cli.CommandLine;
import org.apache.commons.cli.CommandLineParser;
import org.apache.commons.cli.Option;
import org.apache.commons.cli.OptionBuilder;
import org.apache.commons.cli.Options;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.MRConfig;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.mapreduce.filecache.DistributedCache;
import org.apache.hadoop.mapreduce.server.jobtracker.JTConfig;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.FileAlreadyExistsException;
import org.apache.hadoop.mapred.FileInputFormat;
import org.apache.hadoop.mapred.FileOutputFormat;
import org.apache.hadoop.mapred.InvalidJobConfException;
import org.apache.hadoop.mapred.JobClient;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.JobID;
import org.apache.hadoop.mapred.KeyValueTextInputFormat;
import org.apache.hadoop.mapred.OutputFormat;
import org.apache.hadoop.mapred.RunningJob;
import org.apache.hadoop.mapred.SequenceFileAsTextInputFormat;
import org.apache.hadoop.mapred.SequenceFileInputFormat;
import org.apache.hadoop.mapred.TextInputFormat;
import org.apache.hadoop.mapred.TextOutputFormat;
import org.apache.hadoop.mapred.lib.LazyOutputFormat;
import org.apache.hadoop.mapred.lib.aggregate.ValueAggregatorCombiner;
import org.apache.hadoop.mapred.lib.aggregate.ValueAggregatorReducer;
import org.apache.hadoop.streaming.io.IdentifierResolver;
import org.apache.hadoop.streaming.io.InputWriter;
import org.apache.hadoop.streaming.io.OutputReader;
import org.apache.hadoop.util.GenericOptionsParser;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.util.RunJar;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.util.Tool;
public class StreamJob implements Tool {
protected static final Log LOG = LogFactory.getLog(StreamJob.class.getName());
final static String REDUCE_NONE = "NONE";
private CommandLineParser parser = new BasicParser();
private Options allOptions;
@Deprecated
public StreamJob(String[] argv, boolean mayExit)
public StreamJob()
@Override
public Configuration getConf()
@Override
public void setConf(Configuration conf)
@Override
public int run(String[] args) throws Exception
static public JobConf createJob(String[] argv) throws IOException
@Deprecated
public int go() throws IOException
protected void init()
void preProcessArgs()
void postProcessArgs() throws IOException
String unqualifyIfLocalPath(String cmd) throws IOException
void parseArgv()
protected void msg(String msg)
private Option createOption(String name, String desc,
String argName, int max, boolean required)
private Option createBoolOption(String name, String desc)
private void validate(final List<String> values)
throws IllegalArgumentException
private void setupOptions()
public void exitUsage(boolean detailed)
private void printUsage(boolean detailed)
