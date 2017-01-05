package org.apache.hadoop.mapreduce.lib.input;
import java.io.DataOutputStream;
import java.io.IOException;
import java.util.List;
import junit.framework.TestCase;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.mapreduce.InputSplit;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
public class TestDelegatingInputFormat extends TestCase
