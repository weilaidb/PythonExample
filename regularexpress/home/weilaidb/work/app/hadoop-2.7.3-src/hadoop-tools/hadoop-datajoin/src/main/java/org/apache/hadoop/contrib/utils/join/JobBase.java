package org.apache.hadoop.contrib.utils.join;
import java.util.SortedMap;
import java.util.TreeMap;
import java.util.Map.Entry;
import java.util.Iterator;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Mapper;
import org.apache.hadoop.mapred.Reducer;
public abstract class JobBase implements Mapper, Reducer
