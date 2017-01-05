package org.apache.hadoop.io.compress;
import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.compress.Decompressor;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class DecompressorStream extends CompressionInputStream
