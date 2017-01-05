package org.apache.hadoop.io.compress;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.compress.zlib.ZlibDecompressor;
import org.apache.hadoop.io.compress.zlib.ZlibFactory;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class DefaultCodec implements Configurable, CompressionCodec, DirectDecompressionCodec
