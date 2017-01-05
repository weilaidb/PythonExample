package org.apache.hadoop.fs.azure;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.fail;
import static org.junit.Assume.assumeNotNull;
import java.io.*;
import java.util.Arrays;
import org.apache.hadoop.fs.azure.AzureException;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.permission.PermissionStatus;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
public class TestAzureConcurrentOutOfBandIo
