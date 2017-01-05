package org.apache.hadoop.io.compress.zlib;
import java.io.IOException;
import java.util.zip.Deflater;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.compress.Compressor;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
public class BuiltInZlibDeflater extends Deflater implements Compressor
