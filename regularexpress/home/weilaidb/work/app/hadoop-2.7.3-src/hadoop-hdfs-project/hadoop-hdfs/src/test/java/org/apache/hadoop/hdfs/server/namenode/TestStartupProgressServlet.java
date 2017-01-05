package org.apache.hadoop.hdfs.server.namenode;
import static org.apache.hadoop.hdfs.server.namenode.startupprogress.StartupProgressTestHelper.*;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Collections;
import java.util.Map;
import javax.servlet.ServletContext;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import com.google.common.collect.ImmutableMap;
import org.apache.hadoop.hdfs.server.namenode.startupprogress.StartupProgress;
import org.junit.Before;
import org.junit.Test;
import org.mortbay.util.ajax.JSON;
public class TestStartupProgressServlet
