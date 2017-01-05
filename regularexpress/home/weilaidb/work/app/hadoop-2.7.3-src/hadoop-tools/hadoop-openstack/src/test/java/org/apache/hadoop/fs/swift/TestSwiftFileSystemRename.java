package org.apache.hadoop.fs.swift;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.swift.exceptions.SwiftOperationFailedException;
import org.apache.hadoop.fs.swift.util.SwiftTestUtils;
import org.junit.Test;
import java.io.IOException;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.compareByteArrays;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.dataset;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.readBytesToString;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.readDataset;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.writeDataset;
public class TestSwiftFileSystemRename extends SwiftFileSystemBaseTest
