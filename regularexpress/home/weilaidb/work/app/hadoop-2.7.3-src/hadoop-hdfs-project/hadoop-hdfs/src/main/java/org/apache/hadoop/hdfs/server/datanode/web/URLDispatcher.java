package org.apache.hadoop.hdfs.server.datanode.web;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelPipeline;
import io.netty.channel.SimpleChannelInboundHandler;
import io.netty.handler.codec.http.HttpRequest;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.server.datanode.web.webhdfs.WebHdfsHandler;
import java.io.IOException;
import java.net.InetSocketAddress;
import static org.apache.hadoop.hdfs.server.datanode.web.webhdfs.WebHdfsHandler.WEBHDFS_PREFIX;
class URLDispatcher extends SimpleChannelInboundHandler<HttpRequest>
