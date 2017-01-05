package org.apache.hadoop.mapred;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import java.io.IOException;
import java.text.ParseException;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Random;
import org.junit.Assert;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.mapred.Counters.Counter;
import org.apache.hadoop.mapred.Counters.CountersExceededException;
import org.apache.hadoop.mapred.Counters.Group;
import org.apache.hadoop.mapred.Counters.GroupFactory;
import org.apache.hadoop.mapreduce.FileSystemCounter;
import org.apache.hadoop.mapreduce.JobCounter;
import org.apache.hadoop.mapreduce.TaskCounter;
import org.apache.hadoop.mapreduce.counters.FrameworkCounterGroup;
import org.apache.hadoop.mapreduce.counters.CounterGroupFactory.FrameworkGroupFactory;
import org.junit.Test;
public class TestCounters
class GroupFactoryForTest extends GroupFactory
