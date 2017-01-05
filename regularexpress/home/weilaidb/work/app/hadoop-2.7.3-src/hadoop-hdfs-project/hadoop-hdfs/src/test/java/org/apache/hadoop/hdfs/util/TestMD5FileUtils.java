package org.apache.hadoop.hdfs.util;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.hdfs.DFSTestUtil;
import org.apache.hadoop.io.MD5Hash;
import org.apache.hadoop.test.PathUtils;
import org.junit.Before;
import org.junit.Test;
public class TestMD5FileUtils
