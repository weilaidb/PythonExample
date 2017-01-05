package org.apache.hadoop.ha;
import static org.junit.Assert.*;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.util.concurrent.atomic.AtomicInteger;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.ha.HAServiceProtocol.HAServiceState;
import org.apache.hadoop.ha.HealthMonitor.Callback;
import org.apache.hadoop.ha.HealthMonitor.State;
import org.apache.hadoop.util.Time;
import org.junit.Before;
import org.junit.Test;
public class TestHealthMonitor
