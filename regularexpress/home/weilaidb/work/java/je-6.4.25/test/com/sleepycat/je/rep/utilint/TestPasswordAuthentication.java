package com.sleepycat.je.rep.utilint;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.CharBuffer;
import java.util.Arrays;
import java.util.logging.Level;
import com.sleepycat.je.rep.net.DataChannel;
import com.sleepycat.je.rep.net.PasswordSource;
import com.sleepycat.je.rep.utilint.ServiceDispatcher.Response;
import com.sleepycat.je.rep.utilint.ServiceHandshake.AuthenticationMethod;
import com.sleepycat.je.rep.utilint.ServiceHandshake.ClientHandshake;
import com.sleepycat.je.rep.utilint.ServiceHandshake.ClientInitOp;
import com.sleepycat.je.rep.utilint.ServiceHandshake.ServerHandshake;
import com.sleepycat.je.rep.utilint.ServiceHandshake.ServerInitOp;
import com.sleepycat.je.rep.utilint.ServiceHandshake.InitResult;
import com.sleepycat.je.rep.utilint.ServiceHandshake.IOAdapter;
import com.sleepycat.utilint.StringUtils;
class TestPasswordAuthentication implements AuthenticationMethod
