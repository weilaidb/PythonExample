package org.apache.hadoop.fs.swift;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.swift.http.RestClientBindings;
import org.apache.hadoop.fs.swift.snative.SwiftNativeFileSystem;
import org.apache.hadoop.fs.swift.util.SwiftTestUtils;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.util.StringUtils;
import org.junit.Test;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.net.URI;
public class TestSwiftFileSystemExtendedContract extends SwiftFileSystemBaseTest
