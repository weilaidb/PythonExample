package org.apache.hadoop.io.compress.zlib;
import java.io.IOException;
import java.nio.Buffer;
import java.nio.ByteBuffer;
import org.apache.hadoop.io.compress.Decompressor;
import org.apache.hadoop.io.compress.DirectDecompressor;
import org.apache.hadoop.util.NativeCodeLoader;
public class ZlibDecompressor implements Decompressor
