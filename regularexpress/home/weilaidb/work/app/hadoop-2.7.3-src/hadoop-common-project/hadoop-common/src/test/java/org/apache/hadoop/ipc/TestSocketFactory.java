package org.apache.hadoop.ipc;
import static org.junit.Assert.assertSame;
import java.util.HashMap;
import java.util.Map;
import javax.net.SocketFactory;
import org.junit.Assert;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.net.StandardSocketFactory;
import org.junit.Test;
public class TestSocketFactory
