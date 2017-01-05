package org.apache.hadoop.mapreduce.lib.partition;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.BinaryComparable;
import org.apache.hadoop.io.BytesWritable;
import org.apache.hadoop.util.ReflectionUtils;
import junit.framework.TestCase;
public class TestBinaryPartitioner extends TestCase
