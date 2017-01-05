package org.apache.hadoop.crypto;
import java.io.FileDescriptor;
import java.io.FileInputStream;
import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.channels.ReadableByteChannel;
import java.security.GeneralSecurityException;
import java.util.EnumSet;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.ByteBufferReadable;
import org.apache.hadoop.fs.CanSetDropBehind;
import org.apache.hadoop.fs.CanSetReadahead;
import org.apache.hadoop.fs.HasEnhancedByteBufferAccess;
import org.apache.hadoop.fs.HasFileDescriptor;
import org.apache.hadoop.fs.PositionedReadable;
import org.apache.hadoop.fs.ReadOption;
import org.apache.hadoop.fs.Seekable;
import org.apache.hadoop.io.ByteBufferPool;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class CryptoInputStream extends FilterInputStream implements
Seekable, PositionedReadable, ByteBufferReadable, HasFileDescriptor,
CanSetDropBehind, CanSetReadahead, HasEnhancedByteBufferAccess,
ReadableByteChannel
