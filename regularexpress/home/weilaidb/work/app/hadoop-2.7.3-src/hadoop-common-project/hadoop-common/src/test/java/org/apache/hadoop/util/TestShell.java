package org.apache.hadoop.util;
import junit.framework.TestCase;
import org.apache.hadoop.security.alias.AbstractJavaKeyStoreProvider;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.PrintWriter;
import java.lang.management.ManagementFactory;
import java.lang.management.ThreadInfo;
import java.lang.management.ThreadMXBean;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import org.apache.hadoop.fs.FileUtil;
import org.junit.Assume;
import org.junit.Test;
public class TestShell extends TestCase
