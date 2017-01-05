package org.apache.hadoop.io.compress.bzip2;
import java.io.BufferedInputStream;
import java.io.InputStream;
import java.io.IOException;
import org.apache.hadoop.io.compress.SplittableCompressionCodec.READ_MODE;
public class CBZip2InputStream extends InputStream implements BZip2Constants
