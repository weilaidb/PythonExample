package org.apache.hadoop.fs.swift;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.swift.exceptions.SwiftOperationFailedException;
import org.apache.hadoop.fs.swift.snative.SwiftNativeFileSystem;
import org.apache.hadoop.fs.swift.snative.SwiftNativeFileSystemStore;
import org.apache.hadoop.fs.swift.util.DurationStats;
import org.apache.hadoop.fs.swift.util.SwiftTestUtils;
import org.junit.After;
import org.junit.AfterClass;
import org.junit.Assert;
import org.junit.Assume;
import org.junit.Before;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.OutputStream;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.List;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.assertPathExists;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.cleanupInTeardown;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.getServiceURI;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.noteAction;
public class SwiftFileSystemBaseTest extends Assert implements
SwiftTestConstants
