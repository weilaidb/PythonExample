package org.apache.hadoop.mapreduce;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.mapreduce.lib.map.WrappedMapper;
import org.apache.hadoop.mapreduce.task.JobContextImpl;
import org.apache.hadoop.mapreduce.task.MapContextImpl;
import org.junit.Before;
import org.junit.Test;
public class TestContextFactory
