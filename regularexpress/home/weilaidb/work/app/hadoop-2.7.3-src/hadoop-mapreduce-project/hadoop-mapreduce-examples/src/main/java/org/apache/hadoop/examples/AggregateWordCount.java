package org.apache.hadoop.examples;
import java.io.IOException;
import java.util.ArrayList;
import java.util.StringTokenizer;
import java.util.Map.Entry;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.lib.aggregate.ValueAggregatorBaseDescriptor;
import org.apache.hadoop.mapreduce.lib.aggregate.ValueAggregatorJob;
public class AggregateWordCount
