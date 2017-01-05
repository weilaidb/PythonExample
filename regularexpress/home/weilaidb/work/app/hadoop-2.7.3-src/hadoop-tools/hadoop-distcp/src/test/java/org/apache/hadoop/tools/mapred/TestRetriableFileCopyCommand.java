package org.apache.hadoop.tools.mapred;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.*;
import org.apache.hadoop.tools.mapred.CopyMapper.FileAction;
import org.junit.Test;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
import java.io.File;
import java.io.IOException;
import java.io.OutputStream;
public class TestRetriableFileCopyCommand
