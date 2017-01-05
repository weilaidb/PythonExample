package org.apache.hadoop.io.compress.bzip2;
import java.io.IOException;
import java.nio.Buffer;
import java.nio.ByteBuffer;
import org.apache.hadoop.io.compress.Decompressor;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
public class Bzip2Decompressor implements Decompressor
