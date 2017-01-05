package org.apache.hadoop.io.compress.lz4;
import java.io.IOException;
import java.nio.Buffer;
import java.nio.ByteBuffer;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.io.compress.Decompressor;
import org.apache.hadoop.util.NativeCodeLoader;
public class Lz4Decompressor implements Decompressor
