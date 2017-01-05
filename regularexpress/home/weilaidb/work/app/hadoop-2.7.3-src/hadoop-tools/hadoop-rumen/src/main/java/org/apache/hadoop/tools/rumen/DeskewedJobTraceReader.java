package org.apache.hadoop.tools.rumen;
import java.io.Closeable;
import java.io.IOException;
import java.io.Serializable;
import java.util.Comparator;
import java.util.Iterator;
import java.util.PriorityQueue;
import java.util.TreeMap;
import java.util.TreeSet;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
public class DeskewedJobTraceReader implements Closeable
