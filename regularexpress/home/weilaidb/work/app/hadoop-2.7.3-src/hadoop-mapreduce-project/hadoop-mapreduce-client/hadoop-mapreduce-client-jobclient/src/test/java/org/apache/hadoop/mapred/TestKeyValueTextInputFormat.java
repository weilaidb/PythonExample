package org.apache.hadoop.mapred;
import java.io.*;
import java.util.*;
import junit.framework.TestCase;
import org.apache.commons.logging.*;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.io.*;
import org.apache.hadoop.io.compress.*;
import org.apache.hadoop.util.LineReader;
import org.apache.hadoop.util.ReflectionUtils;
public class TestKeyValueTextInputFormat extends TestCase
