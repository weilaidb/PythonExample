package org.apache.hadoop.fs.swift.hdfs2;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.LocatedFileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.RemoteIterator;
import org.apache.hadoop.fs.swift.SwiftFileSystemBaseTest;
import org.apache.hadoop.fs.swift.util.SwiftTestUtils;
import org.junit.Test;
import java.io.IOException;
public class TestV2LsOperations extends SwiftFileSystemBaseTest
