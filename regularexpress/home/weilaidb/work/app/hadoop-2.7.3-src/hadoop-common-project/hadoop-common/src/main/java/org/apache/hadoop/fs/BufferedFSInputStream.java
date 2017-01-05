package org.apache.hadoop.fs;
import java.io.BufferedInputStream;
import java.io.EOFException;
import java.io.FileDescriptor;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class BufferedFSInputStream extends BufferedInputStream
implements Seekable, PositionedReadable, HasFileDescriptor
