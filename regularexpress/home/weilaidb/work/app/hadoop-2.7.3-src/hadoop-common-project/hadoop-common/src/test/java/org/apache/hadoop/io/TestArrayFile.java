package org.apache.hadoop.io;
import java.io.*;
import junit.framework.TestCase;
import org.apache.commons.logging.*;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.io.SequenceFile.CompressionType;
import org.apache.hadoop.util.Progressable;
import org.apache.hadoop.conf.*;
public class TestArrayFile extends TestCase
