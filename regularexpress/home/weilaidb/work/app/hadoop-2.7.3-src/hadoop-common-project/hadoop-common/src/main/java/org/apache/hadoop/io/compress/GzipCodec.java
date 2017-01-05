package org.apache.hadoop.io.compress;
import java.io.*;
import java.util.zip.GZIPOutputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.compress.DefaultCodec;
import org.apache.hadoop.io.compress.zlib.*;
import org.apache.hadoop.io.compress.zlib.ZlibDecompressor.ZlibDirectDecompressor;
import static org.apache.hadoop.util.PlatformName.IBM_JAVA;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class GzipCodec extends DefaultCodec
