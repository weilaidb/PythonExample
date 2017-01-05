package org.apache.hadoop.tools.rumen;
import java.text.ParseException;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.mapreduce.Counters;
import org.apache.hadoop.mapreduce.jobhistory.HistoryEvent;
abstract class HistoryEventEmitter
