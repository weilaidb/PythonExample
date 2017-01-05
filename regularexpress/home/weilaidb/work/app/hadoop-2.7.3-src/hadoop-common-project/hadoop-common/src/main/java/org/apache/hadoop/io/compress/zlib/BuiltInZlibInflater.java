package org.apache.hadoop.io.compress.zlib;
import java.io.IOException;
import java.util.zip.DataFormatException;
import java.util.zip.Inflater;
import org.apache.hadoop.io.compress.Decompressor;
public class BuiltInZlibInflater extends Inflater implements Decompressor
