package org.apache.hadoop.security.authorize;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.fail;
import java.net.InetAddress;
import java.net.UnknownHostException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.ipc.TestRPC.TestProtocol;
import org.apache.hadoop.security.UserGroupInformation;
import org.junit.Test;
public class TestServiceAuthorization
