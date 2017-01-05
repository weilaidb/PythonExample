package org.apache.hadoop.fs.azure;
import java.io.*;
import java.util.*;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.fs.azure.metrics.AzureFileSystemInstrumentation;
import junit.framework.*;
import org.junit.Test;
public class TestBlobTypeSpeedDifference extends TestCase
