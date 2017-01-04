package com.sleepycat.je.rep.utilint;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.util.logging.Logger;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.impl.node.ChannelTimeoutTask;
import com.sleepycat.je.rep.impl.node.RepNode;
import com.sleepycat.je.rep.net.DataChannel;
import com.sleepycat.je.utilint.LoggerUtils;
public class NamedChannelWithTimeout
extends NamedChannel
