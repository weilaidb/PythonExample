package org.apache.hadoop.hdfs.protocol;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.assertEquals;
import java.util.SortedSet;
import org.apache.hadoop.hdfs.protocol.LayoutVersion.Feature;
import org.apache.hadoop.hdfs.protocol.LayoutVersion.FeatureInfo;
import org.apache.hadoop.hdfs.protocol.LayoutVersion.LayoutFeature;
import org.apache.hadoop.hdfs.server.datanode.DataNodeLayoutVersion;
import org.apache.hadoop.hdfs.server.namenode.NameNodeLayoutVersion;
import org.junit.Test;
public class TestLayoutVersion
