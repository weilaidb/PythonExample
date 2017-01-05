package org.apache.hadoop.mapreduce;
import java.io.IOException;
import java.util.Iterator;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class MarkableIterator<VALUE>
implements MarkableIteratorInterface<VALUE>
