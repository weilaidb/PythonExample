package org.apache.hadoop.cli;
import static org.junit.Assert.assertTrue;
import org.apache.hadoop.cli.util.CLICommand;
import org.apache.hadoop.cli.util.CommandExecutor.Result;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.DistributedFileSystem;
import org.apache.hadoop.hdfs.HDFSPolicyProvider;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.security.authorize.PolicyProvider;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
public class TestHDFSCLI extends CLITestHelperDFS
