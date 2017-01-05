package org.apache.hadoop.io.compress.zlib;
import java.io.IOException;
import java.nio.Buffer;
import java.nio.ByteBuffer;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.compress.Compressor;
import org.apache.hadoop.util.NativeCodeLoader;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
public class ZlibCompressor implements Compressor
