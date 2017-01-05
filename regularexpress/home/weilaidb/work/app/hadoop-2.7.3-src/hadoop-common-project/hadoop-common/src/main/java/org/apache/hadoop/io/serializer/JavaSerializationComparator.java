package org.apache.hadoop.io.serializer;
import java.io.IOException;
import java.io.Serializable;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.RawComparator;
@InterfaceAudience.Public
@InterfaceStability.Unstable
public class JavaSerializationComparator<T extends Serializable&Comparable<T>>
extends DeserializerComparator<T>
