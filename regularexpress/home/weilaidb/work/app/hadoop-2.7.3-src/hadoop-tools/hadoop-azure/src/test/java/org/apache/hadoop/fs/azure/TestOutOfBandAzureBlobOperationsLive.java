package org.apache.hadoop.fs.azure;
import static org.junit.Assert.assertTrue;
import static org.junit.Assume.assumeNotNull;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.security.UserGroupInformation;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import com.microsoft.azure.storage.blob.BlobOutputStream;
import com.microsoft.azure.storage.blob.CloudBlockBlob;
public class TestOutOfBandAzureBlobOperationsLive
