package org.apache.hadoop.hdfs.util;
import java.io.File;
import java.io.IOException;
import java.util.Random;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.io.IOUtils;
import org.junit.Before;
import org.junit.Test;
import static org.junit.Assert.*;
public class TestBestEffortLongFile
