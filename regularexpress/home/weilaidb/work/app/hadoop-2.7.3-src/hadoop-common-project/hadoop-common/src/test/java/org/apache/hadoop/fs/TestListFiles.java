package org.apache.hadoop.fs;
import java.io.IOException;
import java.util.HashSet;
import java.util.Random;
import java.util.Set;
import org.apache.commons.logging.impl.Log4JLogger;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.log4j.Level;
import static org.junit.Assert.*;
import org.junit.Test;
import org.junit.BeforeClass;
public class TestListFiles
