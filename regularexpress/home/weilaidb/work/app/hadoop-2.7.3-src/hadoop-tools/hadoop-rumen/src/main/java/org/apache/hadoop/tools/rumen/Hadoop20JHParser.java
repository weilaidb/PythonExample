package org.apache.hadoop.tools.rumen;
import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.jobhistory.HistoryEvent;
import org.apache.hadoop.util.LineReader;
public class Hadoop20JHParser implements JobHistoryParser
