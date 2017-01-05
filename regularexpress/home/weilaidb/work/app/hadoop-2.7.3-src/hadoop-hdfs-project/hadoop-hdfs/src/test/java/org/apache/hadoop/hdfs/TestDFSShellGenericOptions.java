package org.apache.hadoop.hdfs;
import static org.junit.Assert.assertTrue;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.PrintWriter;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FsShell;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.server.namenode.NameNode;
import org.apache.hadoop.util.ToolRunner;
import org.junit.Test;
public class TestDFSShellGenericOptions
