package org.apache.hadoop.io.compress;
import java.io.IOException;
import java.io.InputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.PositionedReadable;
import org.apache.hadoop.fs.Seekable;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public abstract class CompressionInputStream extends InputStream implements Seekable
