package org.apache.hadoop.oncrpc;
import java.io.IOException;
import java.net.DatagramSocket;
import java.net.InetSocketAddress;
import java.net.SocketAddress;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.oncrpc.RpcAcceptedReply.AcceptState;
import org.apache.hadoop.oncrpc.security.Verifier;
import org.apache.hadoop.oncrpc.security.VerifierNone;
import org.apache.hadoop.portmap.PortmapMapping;
import org.apache.hadoop.portmap.PortmapRequest;
import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.buffer.ChannelBuffers;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.channel.MessageEvent;
import org.jboss.netty.channel.SimpleChannelUpstreamHandler;
public abstract class RpcProgram extends SimpleChannelUpstreamHandler
