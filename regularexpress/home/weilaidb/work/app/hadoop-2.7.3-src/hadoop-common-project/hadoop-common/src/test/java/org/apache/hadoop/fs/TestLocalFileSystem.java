package org.apache.hadoop.fs;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem.Statistics;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.util.Shell;
import static org.apache.hadoop.fs.FileSystemTestHelper.*;
import java.io.*;
import java.net.URI;
import java.util.Arrays;
import java.util.Random;
import static org.junit.Assert.*;
import static org.junit.Assume.assumeTrue;
import static org.mockito.Mockito.*;
import org.junit.After;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import org.mockito.internal.util.reflection.Whitebox;
public class TestLocalFileSystem
