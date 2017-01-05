package org.apache.hadoop.mapred.gridmix;
import static org.junit.Assert.*;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.junit.Test;
public class TestPseudoLocalFs
