package org.apache.hadoop.tools.rumen;
import java.text.ParseException;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.mapreduce.Counters;
import org.apache.hadoop.mapreduce.TaskID;
import org.apache.hadoop.mapreduce.TaskType;
import org.apache.hadoop.mapreduce.jobhistory.HistoryEvent;
import org.apache.hadoop.mapreduce.jobhistory.TaskFailedEvent;
import org.apache.hadoop.mapreduce.jobhistory.TaskFinishedEvent;
import org.apache.hadoop.mapreduce.jobhistory.TaskStartedEvent;
import org.apache.hadoop.mapreduce.jobhistory.TaskUpdatedEvent;
public class Task20LineHistoryEventEmitter extends HistoryEventEmitter
