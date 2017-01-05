package org.apache.hadoop.ha;
import static org.junit.Assert.*;
import java.net.InetSocketAddress;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ha.HAServiceProtocol.HAServiceState;
import org.apache.hadoop.util.Shell;
import org.apache.hadoop.util.StringUtils;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import org.mockito.Mockito;
import static org.mockito.Mockito.spy;
public class TestShellCommandFencer
