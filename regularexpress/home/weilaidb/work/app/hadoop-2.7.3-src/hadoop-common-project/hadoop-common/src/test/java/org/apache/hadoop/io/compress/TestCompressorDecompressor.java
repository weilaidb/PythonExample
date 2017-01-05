package org.apache.hadoop.io.compress;
import static org.junit.Assert.fail;
import java.util.Random;
import org.apache.hadoop.io.compress.CompressDecompressTester.CompressionTestStrategy;
import org.apache.hadoop.io.compress.lz4.Lz4Compressor;
import org.apache.hadoop.io.compress.lz4.Lz4Decompressor;
import org.apache.hadoop.io.compress.snappy.SnappyCompressor;
import org.apache.hadoop.io.compress.snappy.SnappyDecompressor;
import org.apache.hadoop.io.compress.zlib.BuiltInZlibDeflater;
import org.apache.hadoop.io.compress.zlib.BuiltInZlibInflater;
import org.junit.Test;
import com.google.common.collect.ImmutableSet;
public class TestCompressorDecompressor
