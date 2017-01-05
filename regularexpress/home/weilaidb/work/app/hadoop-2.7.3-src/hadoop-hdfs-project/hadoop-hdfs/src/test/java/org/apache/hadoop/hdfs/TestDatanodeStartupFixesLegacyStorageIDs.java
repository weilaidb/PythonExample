package org.apache.hadoop.hdfs;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.server.protocol.DatanodeStorage;
import org.apache.hadoop.hdfs.server.protocol.StorageReport;
import org.apache.hadoop.test.GenericTestUtils;
import org.junit.Test;
import java.io.File;
import java.io.IOException;
import org.apache.hadoop.hdfs.TestDFSUpgradeFromImage.ClusterVerifier;
import static org.hamcrest.core.Is.is;
import static org.junit.Assert.assertThat;
import static org.junit.Assert.assertTrue;
public class TestDatanodeStartupFixesLegacyStorageIDs
