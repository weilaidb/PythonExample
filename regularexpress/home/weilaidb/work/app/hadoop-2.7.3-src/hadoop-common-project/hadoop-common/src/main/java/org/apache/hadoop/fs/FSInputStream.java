package org.apache.hadoop.fs;
import java.io.*;
import java.nio.ByteBuffer;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.ZeroCopyUnavailableException;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public abstract class FSInputStream extends InputStream
implements Seekable, PositionedReadable
