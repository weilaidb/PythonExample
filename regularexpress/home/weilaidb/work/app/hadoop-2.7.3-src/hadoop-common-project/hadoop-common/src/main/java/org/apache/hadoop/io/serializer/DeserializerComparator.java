package org.apache.hadoop.io.serializer;
import java.io.IOException;
import java.util.Comparator;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.InputBuffer;
import org.apache.hadoop.io.RawComparator;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public abstract class DeserializerComparator<T> implements RawComparator<T>
