package org.apache.hadoop.io.compress.snappy;
import java.io.IOException;
import java.nio.Buffer;
import java.nio.ByteBuffer;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.io.compress.Decompressor;
import org.apache.hadoop.io.compress.DirectDecompressor;
import org.apache.hadoop.util.NativeCodeLoader;
public class SnappyDecompressor implements Decompressor
