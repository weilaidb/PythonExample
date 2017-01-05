package org.apache.hadoop.tools;
import static org.junit.Assert.assertEquals;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.PrintStream;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.util.ToolRunner;
import org.junit.Before;
import org.junit.Test;
public abstract class GetGroupsTestBase
