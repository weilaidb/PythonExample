package org.apache.hadoop.hdfs.web;
import static org.junit.Assert.assertEquals;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.web.SWebHdfsFileSystem;
import org.apache.hadoop.hdfs.web.WebHdfsFileSystem;
import org.junit.Before;
import org.junit.Test;
import java.io.IOException;
import java.net.URI;
public class TestHttpFSPorts
