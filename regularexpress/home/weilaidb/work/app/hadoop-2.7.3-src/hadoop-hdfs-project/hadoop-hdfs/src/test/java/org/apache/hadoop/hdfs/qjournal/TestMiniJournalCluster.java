package org.apache.hadoop.hdfs.qjournal;
import static org.junit.Assert.*;
import java.io.File;
import java.io.IOException;
import java.net.URI;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.qjournal.server.JournalNode;
import org.junit.Test;
public class TestMiniJournalCluster
