package org.apache.hadoop.fs;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.util.EnumSet;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.ByteBufferPool;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public interface HasEnhancedByteBufferAccess
