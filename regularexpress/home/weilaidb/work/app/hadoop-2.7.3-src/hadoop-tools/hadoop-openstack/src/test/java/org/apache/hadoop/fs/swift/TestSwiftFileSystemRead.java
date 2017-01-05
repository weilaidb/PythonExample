package org.apache.hadoop.fs.swift;
import org.apache.hadoop.fs.BlockLocation;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.junit.Test;
import java.io.EOFException;
import java.io.IOException;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.readBytesToString;
import static org.apache.hadoop.fs.swift.util.SwiftTestUtils.writeTextFile;
public class TestSwiftFileSystemRead extends SwiftFileSystemBaseTest
