package org.apache.hadoop.fs;
import java.io.Closeable;
import java.io.IOException;
import org.apache.avro.file.SeekableInput;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class AvroFSInput implements Closeable, SeekableInput
