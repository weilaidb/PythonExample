package org.apache.hadoop.io;
import java.io.EOFException;
import java.io.IOException;
import java.io.OutputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public class BoundedByteArrayOutputStream extends OutputStream
