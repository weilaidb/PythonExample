package org.apache.hadoop.mapred;
import static org.junit.Assert.assertEquals;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.Writer;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapred.lib.IdentityMapper;
import org.apache.hadoop.mapred.lib.IdentityReducer;
import org.junit.Test;
public class TestLineRecordReaderJobs
