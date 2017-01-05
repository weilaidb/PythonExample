package org.apache.hadoop.util;
import java.util.AbstractList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
import com.google.common.collect.Iterables;
import com.google.common.collect.Lists;
@InterfaceAudience.Private
public class ChunkedArrayList<T> extends AbstractList<T>
