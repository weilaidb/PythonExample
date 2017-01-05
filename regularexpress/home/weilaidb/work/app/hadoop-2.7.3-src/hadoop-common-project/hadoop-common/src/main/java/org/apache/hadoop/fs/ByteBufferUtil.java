package org.apache.hadoop.fs;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.ByteBufferPool;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public final class ByteBufferUtil
