package org.apache.hadoop.fs.contract.hdfs;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.contract.AbstractContractAppendTest;
import org.apache.hadoop.fs.contract.AbstractFSContract;
import org.apache.hadoop.fs.contract.ContractTestUtils;
import org.junit.AfterClass;
import org.junit.BeforeClass;
import java.io.FileNotFoundException;
import java.io.IOException;
public class TestHDFSContractAppend extends AbstractContractAppendTest
