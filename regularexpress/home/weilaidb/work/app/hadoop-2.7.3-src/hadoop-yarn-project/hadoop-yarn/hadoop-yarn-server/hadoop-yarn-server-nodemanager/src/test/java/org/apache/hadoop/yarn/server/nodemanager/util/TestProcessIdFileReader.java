package org.apache.hadoop.yarn.server.nodemanager.util;
import static org.junit.Assert.*;
import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;
import org.junit.Assert;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.util.Shell;
import org.apache.hadoop.yarn.server.nodemanager.util.ProcessIdFileReader;
import org.junit.Test;
public class TestProcessIdFileReader
