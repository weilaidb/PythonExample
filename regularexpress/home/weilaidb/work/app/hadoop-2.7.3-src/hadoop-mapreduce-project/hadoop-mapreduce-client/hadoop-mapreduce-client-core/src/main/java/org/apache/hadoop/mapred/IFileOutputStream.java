package org.apache.hadoop.mapred;
import java.io.IOException;
import java.io.OutputStream;
import java.io.FilterOutputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.util.DataChecksum;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class IFileOutputStream extends FilterOutputStream
