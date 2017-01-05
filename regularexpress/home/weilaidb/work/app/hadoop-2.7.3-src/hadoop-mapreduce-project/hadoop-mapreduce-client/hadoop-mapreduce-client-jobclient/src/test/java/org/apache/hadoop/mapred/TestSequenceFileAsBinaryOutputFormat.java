package org.apache.hadoop.mapred;
import java.io.IOException;
import java.util.Random;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.io.*;
import org.apache.hadoop.io.SequenceFile.CompressionType;
import junit.framework.TestCase;
import org.apache.commons.logging.*;
public class TestSequenceFileAsBinaryOutputFormat extends TestCase
