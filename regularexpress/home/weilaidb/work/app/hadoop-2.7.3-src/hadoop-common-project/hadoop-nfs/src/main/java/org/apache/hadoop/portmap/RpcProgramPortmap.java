package org.apache.hadoop.portmap;
import java.util.concurrent.ConcurrentHashMap;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.oncrpc.RpcAcceptedReply;
import org.apache.hadoop.oncrpc.RpcCall;
import org.apache.hadoop.oncrpc.RpcInfo;
import org.apache.hadoop.oncrpc.RpcProgram;
import org.apache.hadoop.oncrpc.RpcResponse;
import org.apache.hadoop.oncrpc.RpcUtil;
import org.apache.hadoop.oncrpc.XDR;
import org.apache.hadoop.oncrpc.security.VerifierNone;
import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.buffer.ChannelBuffers;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.channel.ChannelStateEvent;
import org.jboss.netty.channel.ExceptionEvent;
import org.jboss.netty.channel.MessageEvent;
import org.jboss.netty.channel.group.ChannelGroup;
import org.jboss.netty.handler.timeout.IdleState;
import org.jboss.netty.handler.timeout.IdleStateAwareChannelUpstreamHandler;
import org.jboss.netty.handler.timeout.IdleStateEvent;
final class RpcProgramPortmap extends IdleStateAwareChannelUpstreamHandler
