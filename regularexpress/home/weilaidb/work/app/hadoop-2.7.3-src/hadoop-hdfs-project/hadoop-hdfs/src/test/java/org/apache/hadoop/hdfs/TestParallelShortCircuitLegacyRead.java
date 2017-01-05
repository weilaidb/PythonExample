package org.apache.hadoop.hdfs;
import org.apache.hadoop.net.unix.DomainSocket;
import org.apache.hadoop.security.UserGroupInformation;
import org.junit.AfterClass;
import org.junit.BeforeClass;
public class TestParallelShortCircuitLegacyRead extends TestParallelReadUtil
