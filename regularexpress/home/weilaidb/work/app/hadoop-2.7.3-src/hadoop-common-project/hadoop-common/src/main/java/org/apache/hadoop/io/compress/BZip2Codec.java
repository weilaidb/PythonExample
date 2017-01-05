package org.apache.hadoop.io.compress;
import java.io.BufferedInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import org.apache.commons.io.Charsets;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.Seekable;
import org.apache.hadoop.io.compress.bzip2.BZip2Constants;
import org.apache.hadoop.io.compress.bzip2.CBZip2InputStream;
import org.apache.hadoop.io.compress.bzip2.CBZip2OutputStream;
import org.apache.hadoop.io.compress.bzip2.Bzip2Factory;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class BZip2Codec implements Configurable, SplittableCompressionCodec
