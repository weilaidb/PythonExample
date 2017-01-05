package org.apache.hadoop.hdfs;
import static org.junit.Assert.assertTrue;
import static org.mockito.Mockito.doNothing;
import static org.mockito.Mockito.spy;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.server.namenode.FSEditLog;
import org.apache.log4j.Level;
import org.junit.Test;
import org.mockito.Mockito;
public class TestRenameWhileOpen
