package org.apache.hadoop.hdfs.util;
import java.io.EOFException;
import java.io.FilterInputStream;
import java.io.IOException;
import java.io.InputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class ExactSizeInputStream extends FilterInputStream
