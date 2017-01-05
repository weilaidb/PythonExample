package org.apache.hadoop.io.compress;
import java.io.IOException;
import java.io.OutputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.compress.CompressionOutputStream;
import org.apache.hadoop.io.compress.Compressor;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class CompressorStream extends CompressionOutputStream
