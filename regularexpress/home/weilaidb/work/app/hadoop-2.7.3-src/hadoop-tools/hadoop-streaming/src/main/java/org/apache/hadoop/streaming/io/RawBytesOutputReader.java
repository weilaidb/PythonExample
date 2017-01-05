package org.apache.hadoop.streaming.io;
import java.io.DataInput;
import java.io.EOFException;
import java.io.IOException;
import org.apache.hadoop.io.BytesWritable;
import org.apache.hadoop.streaming.PipeMapRed;
public class RawBytesOutputReader
extends OutputReader<BytesWritable, BytesWritable>
