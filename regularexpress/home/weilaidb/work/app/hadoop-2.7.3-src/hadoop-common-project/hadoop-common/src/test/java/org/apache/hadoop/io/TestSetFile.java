package org.apache.hadoop.io;
import java.io.*;
import java.util.*;
import java.util.concurrent.atomic.AtomicReference;
import junit.framework.TestCase;
import org.apache.commons.logging.*;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.conf.*;
import org.apache.hadoop.io.SequenceFile.CompressionType;
public class TestSetFile extends TestCase
