package org.apache.hadoop.mapreduce.lib.input;
import java.io.*;
import java.util.*;
import junit.framework.TestCase;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.io.*;
import org.apache.hadoop.mapreduce.*;
import org.apache.hadoop.mapreduce.task.MapContextImpl;
public class TestNLineInputFormat extends TestCase
