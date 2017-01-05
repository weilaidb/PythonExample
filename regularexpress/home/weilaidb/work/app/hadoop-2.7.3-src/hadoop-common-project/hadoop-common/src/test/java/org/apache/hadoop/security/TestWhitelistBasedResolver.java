package org.apache.hadoop.security;
import java.io.IOException;
import java.net.InetAddress;
import java.util.Map;
import junit.framework.TestCase;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.WhitelistBasedResolver;
import org.apache.hadoop.util.TestFileBasedIPList;
public class TestWhitelistBasedResolver extends TestCase
