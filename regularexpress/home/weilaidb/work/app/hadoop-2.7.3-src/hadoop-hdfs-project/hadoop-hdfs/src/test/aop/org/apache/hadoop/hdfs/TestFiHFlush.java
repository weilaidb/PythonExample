package org.apache.hadoop.hdfs;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fi.DataTransferTestUtil;
import org.apache.hadoop.fi.FiHFlushTestUtil;
import org.apache.hadoop.fi.FiHFlushTestUtil.DerrAction;
import org.apache.hadoop.fi.FiHFlushTestUtil.HFlushTest;
import org.apache.hadoop.fi.FiTestUtil;
import static org.junit.Assert.assertTrue;
import org.junit.Test;
import java.io.IOException;
public class TestFiHFlush
