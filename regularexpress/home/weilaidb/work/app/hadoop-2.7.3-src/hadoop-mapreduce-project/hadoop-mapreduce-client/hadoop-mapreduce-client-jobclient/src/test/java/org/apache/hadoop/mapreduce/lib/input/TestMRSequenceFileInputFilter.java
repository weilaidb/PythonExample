package org.apache.hadoop.mapreduce.lib.input;
import java.io.*;
import java.util.*;
import junit.framework.TestCase;
import org.apache.commons.logging.*;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.io.*;
import org.apache.hadoop.mapreduce.InputFormat;
import org.apache.hadoop.mapreduce.InputSplit;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.MapContext;
import org.apache.hadoop.mapreduce.MapReduceTestUtil;
import org.apache.hadoop.mapreduce.RecordReader;
import org.apache.hadoop.mapreduce.TaskAttemptContext;
import org.apache.hadoop.mapreduce.task.MapContextImpl;
import org.apache.hadoop.conf.*;
public class TestMRSequenceFileInputFilter extends TestCase
