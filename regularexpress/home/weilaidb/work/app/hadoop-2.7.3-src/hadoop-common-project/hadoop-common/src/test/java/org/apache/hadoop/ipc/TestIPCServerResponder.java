package org.apache.hadoop.ipc;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.util.Random;
import junit.framework.TestCase;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.io.BytesWritable;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.net.NetUtils;
public class TestIPCServerResponder extends TestCase
