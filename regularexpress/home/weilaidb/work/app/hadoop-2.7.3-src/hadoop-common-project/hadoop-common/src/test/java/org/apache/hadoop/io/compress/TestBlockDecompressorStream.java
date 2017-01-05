package org.apache.hadoop.io.compress;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.fail;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.nio.ByteBuffer;
import org.apache.hadoop.conf.Configuration;
import org.junit.Test;
public class TestBlockDecompressorStream
class FakeCompressor implements Compressor
class FakeDecompressor implements Decompressor
