package org.apache.hadoop.fs.s3a.scale;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.contract.ContractTestUtils;
import org.apache.hadoop.fs.s3a.S3AFileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.s3a.S3ATestUtils;
import org.junit.After;
import org.junit.Before;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.io.IOException;
import java.net.URI;
import static org.junit.Assume.assumeTrue;
public class S3AScaleTestBase
