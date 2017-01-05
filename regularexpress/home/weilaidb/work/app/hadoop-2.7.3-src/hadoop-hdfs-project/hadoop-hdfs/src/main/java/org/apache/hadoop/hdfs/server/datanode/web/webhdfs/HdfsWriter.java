package org.apache.hadoop.hdfs.server.datanode.web.webhdfs;
import io.netty.channel.ChannelFutureListener;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.SimpleChannelInboundHandler;
import io.netty.handler.codec.http.DefaultHttpResponse;
import io.netty.handler.codec.http.HttpContent;
import io.netty.handler.codec.http.LastHttpContent;
import org.apache.commons.logging.Log;
import org.apache.hadoop.hdfs.DFSClient;
import org.apache.hadoop.io.IOUtils;
import java.io.IOException;
import java.io.OutputStream;
import static io.netty.handler.codec.http.HttpHeaders.Names.CONNECTION;
import static io.netty.handler.codec.http.HttpHeaders.Values.CLOSE;
class HdfsWriter extends SimpleChannelInboundHandler<HttpContent>
