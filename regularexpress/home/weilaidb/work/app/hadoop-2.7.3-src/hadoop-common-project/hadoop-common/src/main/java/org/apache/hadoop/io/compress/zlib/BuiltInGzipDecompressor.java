package org.apache.hadoop.io.compress.zlib;
import java.io.IOException;
import java.util.zip.Checksum;
import java.util.zip.DataFormatException;
import java.util.zip.Inflater;
import org.apache.hadoop.io.compress.Decompressor;
import org.apache.hadoop.io.compress.DoNotPool;
import org.apache.hadoop.util.DataChecksum;
@DoNotPool
public class BuiltInGzipDecompressor implements Decompressor
