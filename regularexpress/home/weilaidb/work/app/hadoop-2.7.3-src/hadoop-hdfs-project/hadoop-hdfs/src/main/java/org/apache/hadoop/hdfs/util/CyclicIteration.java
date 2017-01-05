package org.apache.hadoop.hdfs.util;
import java.util.Iterator;
import java.util.Map;
import java.util.NavigableMap;
import java.util.NoSuchElementException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class CyclicIteration<K, V> implements Iterable<Map.Entry<K, V>>
