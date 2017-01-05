package org.apache.hadoop.record;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.WritableComparable;
@Deprecated
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class Record implements WritableComparable, Cloneable
