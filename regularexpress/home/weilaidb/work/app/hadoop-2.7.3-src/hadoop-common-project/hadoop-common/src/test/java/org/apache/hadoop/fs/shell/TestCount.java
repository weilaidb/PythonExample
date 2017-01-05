package org.apache.hadoop.fs.shell;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
import java.io.PrintStream;
import java.io.IOException;
import java.net.URI;
import java.util.LinkedList;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.ContentSummary;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FilterFileSystem;
import org.apache.hadoop.fs.Path;
import org.junit.Test;
import org.junit.Before;
import org.junit.BeforeClass;
public class TestCount
