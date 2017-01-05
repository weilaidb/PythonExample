package org.apache.hadoop.io.compress.bzip2;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.util.NativeCodeLoader;
import org.apache.hadoop.io.compress.Compressor;
import org.apache.hadoop.io.compress.Decompressor;
import org.apache.hadoop.io.compress.bzip2.Bzip2Compressor;
import org.apache.hadoop.io.compress.bzip2.Bzip2Decompressor;
import org.apache.hadoop.io.compress.bzip2.BZip2DummyCompressor;
import org.apache.hadoop.io.compress.bzip2.BZip2DummyDecompressor;
public class Bzip2Factory
