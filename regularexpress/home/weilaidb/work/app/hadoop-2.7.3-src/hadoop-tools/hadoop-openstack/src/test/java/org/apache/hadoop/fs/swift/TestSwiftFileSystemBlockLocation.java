package org.apache.hadoop.fs.swift;
import org.apache.hadoop.fs.BlockLocation;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.swift.http.SwiftProtocolConstants;
import org.apache.hadoop.fs.swift.util.SwiftTestUtils;
import org.junit.Test;
import java.io.IOException;
public class TestSwiftFileSystemBlockLocation extends SwiftFileSystemBaseTest
