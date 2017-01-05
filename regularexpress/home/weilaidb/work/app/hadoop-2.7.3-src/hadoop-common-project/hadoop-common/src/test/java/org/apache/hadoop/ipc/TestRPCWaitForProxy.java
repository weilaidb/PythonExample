package org.apache.hadoop.ipc;
import org.apache.hadoop.conf.Configuration;
import static org.apache.hadoop.fs.CommonConfigurationKeysPublic.*;
import org.apache.hadoop.ipc.TestRPC.TestProtocol;
import org.junit.Assert;
import org.junit.Test;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.io.InterruptedIOException;
import java.net.ConnectException;
import java.net.InetSocketAddress;
import java.nio.channels.ClosedByInterruptException;
public class TestRPCWaitForProxy extends Assert
