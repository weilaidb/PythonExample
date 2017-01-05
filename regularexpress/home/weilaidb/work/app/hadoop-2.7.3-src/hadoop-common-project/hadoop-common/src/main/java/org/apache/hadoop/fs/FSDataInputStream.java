package org.apache.hadoop.fs;
import java.io.*;
import java.nio.ByteBuffer;
import java.util.EnumSet;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.ByteBufferPool;
import org.apache.hadoop.fs.ByteBufferUtil;
import org.apache.hadoop.util.IdentityHashStore;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class FSDataInputStream extends DataInputStream
implements Seekable, PositionedReadable,
ByteBufferReadable, HasFileDescriptor, CanSetDropBehind, CanSetReadahead,
HasEnhancedByteBufferAccess, CanUnbuffer
