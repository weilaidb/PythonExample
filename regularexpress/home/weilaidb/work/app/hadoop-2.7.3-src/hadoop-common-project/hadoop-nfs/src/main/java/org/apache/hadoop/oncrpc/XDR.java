package org.apache.hadoop.oncrpc;
import java.nio.ByteBuffer;
import org.apache.commons.io.Charsets;
import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.buffer.ChannelBuffers;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
public final class XDR
