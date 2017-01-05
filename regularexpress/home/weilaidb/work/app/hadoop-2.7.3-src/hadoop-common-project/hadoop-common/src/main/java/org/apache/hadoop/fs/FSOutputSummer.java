package org.apache.hadoop.fs;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.util.DataChecksum;
import java.io.IOException;
import java.io.OutputStream;
import java.util.zip.Checksum;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
abstract public class FSOutputSummer extends OutputStream
