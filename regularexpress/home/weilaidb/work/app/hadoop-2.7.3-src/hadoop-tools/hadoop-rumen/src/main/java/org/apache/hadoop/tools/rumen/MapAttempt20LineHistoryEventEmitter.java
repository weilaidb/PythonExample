package org.apache.hadoop.tools.rumen;
import java.text.ParseException;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.mapreduce.Counters;
import org.apache.hadoop.mapreduce.TaskAttemptID;
import org.apache.hadoop.mapreduce.jobhistory.HistoryEvent;
import org.apache.hadoop.mapreduce.jobhistory.MapAttemptFinishedEvent;
public class MapAttempt20LineHistoryEventEmitter extends
TaskAttempt20LineEventEmitter
