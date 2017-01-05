package org.apache.hadoop.util;
import org.junit.Test;
import static org.junit.Assert.*;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.crypto.OpensslCipher;
import org.apache.hadoop.io.compress.Lz4Codec;
import org.apache.hadoop.io.compress.SnappyCodec;
import org.apache.hadoop.io.compress.zlib.ZlibFactory;
import org.apache.hadoop.util.NativeCodeLoader;
public class TestNativeCodeLoader
