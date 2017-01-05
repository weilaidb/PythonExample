package org.apache.hadoop.io;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.util.EnumSet;
import java.util.Iterator;
import java.util.AbstractCollection;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class EnumSetWritable<E extends Enum<E>> extends AbstractCollection<E>
implements Writable, Configurable
