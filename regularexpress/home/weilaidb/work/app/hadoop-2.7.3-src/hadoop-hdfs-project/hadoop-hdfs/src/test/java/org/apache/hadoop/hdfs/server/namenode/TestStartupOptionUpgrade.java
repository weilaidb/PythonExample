package org.apache.hadoop.hdfs.server.namenode;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import java.net.URI;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.protocol.LayoutVersion.Feature;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.StartupOption;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;
@RunWith(value = Parameterized.class)
public class TestStartupOptionUpgrade
