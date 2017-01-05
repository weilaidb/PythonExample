package org.apache.hadoop.fs.contract;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileAlreadyExistsException;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IOUtils;
import org.junit.Test;
import org.junit.internal.AssumptionViolatedException;
import java.io.FileNotFoundException;
import java.io.IOException;
import static org.apache.hadoop.fs.contract.ContractTestUtils.dataset;
import static org.apache.hadoop.fs.contract.ContractTestUtils.skip;
import static org.apache.hadoop.fs.contract.ContractTestUtils.writeDataset;
import static org.apache.hadoop.fs.contract.ContractTestUtils.writeTextFile;
public abstract class AbstractContractCreateTest extends
AbstractFSContractTestBase
