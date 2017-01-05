package org.apache.hadoop.fs.swift;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.ParentNotDirectoryException;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.swift.exceptions.SwiftBadRequestException;
import org.apache.hadoop.fs.swift.snative.SwiftNativeFileSystem;
import org.apache.hadoop.fs.swift.util.SwiftTestUtils;
import org.junit.Test;
import java.io.FileNotFoundException;
import java.io.IOException;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.assertFileHasLength;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.assertIsDirectory;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.readBytesToString;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.writeTextFile;
public class TestSwiftFileSystemBasicOps extends SwiftFileSystemBaseTest
