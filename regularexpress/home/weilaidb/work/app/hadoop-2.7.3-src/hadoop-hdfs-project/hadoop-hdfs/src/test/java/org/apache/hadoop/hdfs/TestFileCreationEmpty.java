package org.apache.hadoop.hdfs;
import static org.junit.Assert.assertFalse;
import java.util.ConcurrentModificationException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.server.namenode.LeaseManager;
import org.junit.Test;
public class TestFileCreationEmpty
