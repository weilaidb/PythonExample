package com.sleepycat.je.rep.utilint;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.ByteBuffer;
import java.nio.channels.ByteChannel;
import java.nio.channels.Channel;
import java.util.logging.Level;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.rep.net.DataChannel;
import com.sleepycat.je.rep.utilint.ServiceDispatcher.Response;
import com.sleepycat.utilint.StringUtils;
public class ServiceHandshake
