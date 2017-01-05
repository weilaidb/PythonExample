package org.apache.hadoop.fs;
import java.util.Arrays;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.Options.ChecksumOpt;
import org.apache.hadoop.io.Writable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class FileChecksum implements Writable
