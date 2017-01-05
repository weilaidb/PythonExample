package org.apache.hadoop.fs.swift;
import org.apache.commons.httpclient.Header;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.BlockLocation;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.swift.http.SwiftProtocolConstants;
import org.apache.hadoop.fs.swift.snative.SwiftNativeFileSystem;
import org.apache.hadoop.fs.swift.util.SwiftTestUtils;
import org.apache.hadoop.fs.swift.util.SwiftUtils;
import org.apache.hadoop.io.IOUtils;
import org.junit.Test;
import org.junit.internal.AssumptionViolatedException;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.assertPathExists;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.readDataset;
public class TestSwiftFileSystemPartitionedUploads extends
SwiftFileSystemBaseTest
