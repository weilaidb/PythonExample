package org.apache.hadoop.util;
import java.util.Collection;
import java.util.Iterator;
import java.util.NoSuchElementException;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public class IntrusiveCollection<E extends IntrusiveCollection.Element>
implements Collection<E>
