package org.apache.hadoop.fs;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import org.apache.hadoop.fs.FileContextTestHelper;
import org.apache.hadoop.fs.permission.FsPermission;
public class TestLocalFSFileContextMainOperations extends FileContextMainOperationsBaseTest
