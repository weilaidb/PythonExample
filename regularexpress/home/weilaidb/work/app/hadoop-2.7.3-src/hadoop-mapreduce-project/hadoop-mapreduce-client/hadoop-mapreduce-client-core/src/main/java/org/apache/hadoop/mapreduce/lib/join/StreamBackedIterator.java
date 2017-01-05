package org.apache.hadoop.mapreduce.lib.join;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class StreamBackedIterator<X extends Writable>
implements ResetableIterator<X>
