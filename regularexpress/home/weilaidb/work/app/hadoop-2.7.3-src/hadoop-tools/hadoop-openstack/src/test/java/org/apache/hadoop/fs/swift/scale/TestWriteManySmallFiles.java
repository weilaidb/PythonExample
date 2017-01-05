package org.apache.hadoop.fs.swift.scale;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.swift.util.Duration;
import org.apache.hadoop.fs.swift.util.DurationStats;
import org.apache.hadoop.fs.swift.util.SwiftTestUtils;
import org.junit.Test;
public class TestWriteManySmallFiles extends SwiftScaleTestBase
