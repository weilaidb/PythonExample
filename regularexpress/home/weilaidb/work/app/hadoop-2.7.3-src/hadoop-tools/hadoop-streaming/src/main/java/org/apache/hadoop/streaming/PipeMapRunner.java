package org.apache.hadoop.streaming;
import org.apache.hadoop.mapred.MapRunner;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.RecordReader;
import org.apache.hadoop.mapred.OutputCollector;
import java.io.IOException;
public class PipeMapRunner<K1, V1, K2, V2> extends MapRunner<K1, V1, K2, V2>
