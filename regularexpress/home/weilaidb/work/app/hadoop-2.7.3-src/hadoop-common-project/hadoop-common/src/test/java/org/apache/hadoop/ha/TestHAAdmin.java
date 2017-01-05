package org.apache.hadoop.ha;
import static org.junit.Assert.*;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.PrintStream;
import java.net.InetSocketAddress;
import org.apache.commons.logging.LogFactory;
import org.apache.commons.logging.Log;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ha.HAServiceProtocol.HAServiceState;
import org.junit.Before;
import org.junit.Test;
import com.google.common.base.Charsets;
import com.google.common.base.Joiner;
public class TestHAAdmin
