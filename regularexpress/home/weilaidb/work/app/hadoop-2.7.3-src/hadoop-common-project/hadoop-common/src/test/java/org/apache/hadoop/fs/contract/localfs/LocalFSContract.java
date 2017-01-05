package org.apache.hadoop.fs.contract.localfs;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileSystemTestHelper;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.contract.AbstractFSContract;
import org.apache.hadoop.fs.contract.ContractOptions;
import org.apache.hadoop.fs.contract.ContractTestUtils;
import org.apache.hadoop.util.Shell;
import java.io.IOException;
public class LocalFSContract extends AbstractFSContract
