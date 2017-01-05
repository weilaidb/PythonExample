package org.apache.hadoop.ha;
import static org.junit.Assert.*;
import java.net.InetSocketAddress;
import java.util.List;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.util.Shell;
import org.junit.Before;
import org.junit.Test;
import org.mockito.Mockito;
import com.google.common.collect.Lists;
public class TestNodeFencer
