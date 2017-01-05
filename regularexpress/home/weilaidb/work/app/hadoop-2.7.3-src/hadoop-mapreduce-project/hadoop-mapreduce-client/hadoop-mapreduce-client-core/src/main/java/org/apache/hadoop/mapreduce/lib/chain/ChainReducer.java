package org.apache.hadoop.mapreduce.lib.chain;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Reducer;
import org.apache.hadoop.mapreduce.lib.chain.Chain.ChainBlockingQueue;
import java.io.IOException;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class ChainReducer<KEYIN, VALUEIN, KEYOUT, VALUEOUT> extends
Reducer<KEYIN, VALUEIN, KEYOUT, VALUEOUT>
