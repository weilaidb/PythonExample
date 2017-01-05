package org.apache.hadoop.fs;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.fail;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.StringReader;
import org.apache.hadoop.conf.Configuration;
import org.junit.Assume;
import org.junit.BeforeClass;
import org.junit.Test;
public class TestStat extends FileSystemTestHelper
