package com.sleepycat.je.rep.utilint.net;
import com.sleepycat.je.rep.net.DataChannel;
import com.sleepycat.je.rep.net.DataChannelFactory;
import com.sleepycat.je.rep.net.InstanceParams;
import com.sleepycat.je.rep.utilint.RepUtils;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.nio.channels.SocketChannel;
public class SimpleChannelFactory implements DataChannelFactory
