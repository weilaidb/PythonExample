package org.apache.hadoop.util.bloom;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.WritableComparable;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public class Key implements WritableComparable<Key>
