package org.apache.hadoop.fs.swift;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.swift.http.SwiftProtocolConstants;
import org.apache.hadoop.fs.swift.util.SwiftTestUtils;
import org.apache.hadoop.io.IOUtils;
import org.junit.After;
import org.junit.Test;
public class TestReadPastBuffer extends SwiftFileSystemBaseTest
