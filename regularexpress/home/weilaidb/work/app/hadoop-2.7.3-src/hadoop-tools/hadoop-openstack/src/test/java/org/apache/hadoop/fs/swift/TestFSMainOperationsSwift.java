package org.apache.hadoop.fs.swift;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSMainOperationsBaseTest;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.swift.http.SwiftProtocolConstants;
import org.apache.hadoop.fs.swift.util.SwiftTestUtils;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import static org.apache.hadoop.fs.swift.SwiftTestConstants.SWIFT_TEST_TIMEOUT;
import java.io.IOException;
import java.net.URI;
public class TestFSMainOperationsSwift extends FSMainOperationsBaseTest
