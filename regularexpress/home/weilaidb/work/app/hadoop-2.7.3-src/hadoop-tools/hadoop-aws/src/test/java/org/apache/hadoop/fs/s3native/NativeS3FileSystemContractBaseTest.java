package org.apache.hadoop.fs.s3native;
import java.io.IOException;
import java.io.InputStream;
import java.net.URI;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystemContractBaseTest;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.s3native.NativeS3FileSystem.NativeS3FsInputStream;
import org.junit.internal.AssumptionViolatedException;
public abstract class NativeS3FileSystemContractBaseTest
extends FileSystemContractBaseTest
