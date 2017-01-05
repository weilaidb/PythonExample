package org.apache.hadoop.cli;
import org.apache.hadoop.cli.util.CLICommand;
import org.apache.hadoop.cli.util.CommandExecutor.Result;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
public class TestAclCLI extends CLITestHelperDFS
