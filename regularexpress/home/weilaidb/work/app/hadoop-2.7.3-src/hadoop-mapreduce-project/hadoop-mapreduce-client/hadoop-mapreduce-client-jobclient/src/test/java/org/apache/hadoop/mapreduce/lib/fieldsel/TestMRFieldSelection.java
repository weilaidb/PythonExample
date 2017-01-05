package org.apache.hadoop.mapreduce.lib.fieldsel;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.io.*;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.MapReduceTestUtil;
import junit.framework.TestCase;
import java.text.NumberFormat;
public class TestMRFieldSelection extends TestCase
