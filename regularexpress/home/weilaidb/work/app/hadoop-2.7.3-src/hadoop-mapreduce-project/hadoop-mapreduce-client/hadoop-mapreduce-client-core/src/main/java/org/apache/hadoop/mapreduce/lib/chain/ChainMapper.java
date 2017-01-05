package org.apache.hadoop.mapreduce.lib.chain;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.lib.chain.Chain.ChainBlockingQueue;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class ChainMapper<KEYIN, VALUEIN, KEYOUT, VALUEOUT> extends
Mapper<KEYIN, VALUEIN, KEYOUT, VALUEOUT>
