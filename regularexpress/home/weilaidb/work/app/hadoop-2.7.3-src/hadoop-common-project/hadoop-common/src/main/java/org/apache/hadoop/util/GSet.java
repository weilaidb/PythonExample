package org.apache.hadoop.util;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
@InterfaceAudience.Private
public interface GSet<K, E extends K> extends Iterable<E>
