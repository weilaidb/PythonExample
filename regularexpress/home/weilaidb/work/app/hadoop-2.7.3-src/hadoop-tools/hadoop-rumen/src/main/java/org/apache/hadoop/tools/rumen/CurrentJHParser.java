package org.apache.hadoop.tools.rumen;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import org.apache.hadoop.mapreduce.jobhistory.EventReader;
import org.apache.hadoop.mapreduce.jobhistory.HistoryEvent;
import org.apache.hadoop.mapreduce.v2.hs.JobHistory;
public class CurrentJHParser implements JobHistoryParser
