package org.apache.hadoop.hdfs.qjournal.server;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import java.io.IOException;
import java.lang.management.ManagementFactory;
import java.util.HashMap;
import java.util.Map;
import javax.management.MBeanServer;
import javax.management.ObjectName;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.qjournal.MiniJournalCluster;
import org.apache.hadoop.hdfs.server.protocol.NamespaceInfo;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import org.mortbay.util.ajax.JSON;
public class TestJournalNodeMXBean
