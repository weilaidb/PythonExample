package org.apache.hadoop.fs.s3;
import java.io.IOException;
import java.net.URI;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystemContractBaseTest;
import org.junit.internal.AssumptionViolatedException;
public abstract class S3FileSystemContractBaseTest
extends FileSystemContractBaseTest
