package org.apache.hadoop.ant;
import java.io.ByteArrayOutputStream;
import java.io.OutputStream;
import java.io.PrintStream;
import java.security.AccessController;
import java.security.PrivilegedAction;
import java.util.LinkedList;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FsShell;
import org.apache.tools.ant.AntClassLoader;
import org.apache.tools.ant.BuildException;
import org.apache.tools.ant.Task;
import org.apache.hadoop.util.ToolRunner;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.HdfsConfiguration;
@InterfaceAudience.Private
public class DfsTask extends Task
