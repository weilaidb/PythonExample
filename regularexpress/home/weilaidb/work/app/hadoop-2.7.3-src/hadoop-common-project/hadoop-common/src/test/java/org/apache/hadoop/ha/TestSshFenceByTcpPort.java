package org.apache.hadoop.ha;
import static org.junit.Assert.*;
import java.net.InetSocketAddress;
import org.apache.commons.logging.impl.Log4JLogger;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ha.HAServiceProtocol.HAServiceState;
import org.apache.hadoop.ha.SshFenceByTcpPort.Args;
import org.apache.log4j.Level;
import org.junit.Assume;
import org.junit.Test;
public class TestSshFenceByTcpPort
