package org.apache.hadoop.hdfs.server.namenode;
import static org.apache.hadoop.hdfs.server.namenode.NNStorage.getFinalizedEditsFileName;
import static org.apache.hadoop.hdfs.server.namenode.NNStorage.getImageFileName;
import static org.apache.hadoop.hdfs.server.namenode.NNStorage.getInProgressEditsFileName;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import static org.mockito.Mockito.doThrow;
import static org.mockito.Mockito.spy;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Set;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.cli.CLITestCmdDFS;
import org.apache.hadoop.cli.util.CLICommandDFSAdmin;
import org.apache.hadoop.cli.util.CommandExecutor;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.server.common.Storage.StorageDirectory;
import org.apache.hadoop.hdfs.server.namenode.JournalSet.JournalAndStream;
import org.apache.hadoop.util.Shell;
import org.junit.Before;
import org.junit.Test;
import org.mockito.Mockito;
import com.google.common.collect.ImmutableSet;
public class TestStorageRestore
