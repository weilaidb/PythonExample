package org.apache.hadoop.mapred;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.io.*;
import org.apache.hadoop.mapred.lib.*;
import org.apache.hadoop.mapreduce.MapReduceTestUtil;
import org.apache.hadoop.mapreduce.lib.fieldsel.FieldSelectionHelper;
import org.apache.hadoop.mapreduce.lib.fieldsel.TestMRFieldSelection;
import junit.framework.TestCase;
import java.text.NumberFormat;
public class TestFieldSelection extends TestCase
