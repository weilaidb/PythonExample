package org.apache.hadoop.io.compress;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.compress.snappy.SnappyCompressor;
import org.apache.hadoop.io.compress.snappy.SnappyDecompressor;
import org.apache.hadoop.io.compress.snappy.SnappyDecompressor.SnappyDirectDecompressor;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.util.NativeCodeLoader;
public class SnappyCodec implements Configurable, CompressionCodec, DirectDecompressionCodec
