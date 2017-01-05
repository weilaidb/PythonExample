package org.apache.hadoop.io.compress;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.compress.lz4.Lz4Compressor;
import org.apache.hadoop.io.compress.lz4.Lz4Decompressor;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.util.NativeCodeLoader;
public class Lz4Codec implements Configurable, CompressionCodec
