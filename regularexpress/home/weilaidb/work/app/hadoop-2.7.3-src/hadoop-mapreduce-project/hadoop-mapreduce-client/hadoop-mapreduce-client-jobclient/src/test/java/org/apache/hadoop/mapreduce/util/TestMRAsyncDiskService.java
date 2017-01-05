package org.apache.hadoop.mapreduce.util;
import java.io.File;
import java.io.IOException;
import junit.framework.TestCase;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.mapreduce.util.MRAsyncDiskService;
import org.junit.Test;
public class TestMRAsyncDiskService extends TestCase
