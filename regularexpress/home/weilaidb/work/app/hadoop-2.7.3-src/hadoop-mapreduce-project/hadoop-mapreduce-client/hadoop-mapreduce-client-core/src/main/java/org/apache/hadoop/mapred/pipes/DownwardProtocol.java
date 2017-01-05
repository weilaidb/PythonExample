package org.apache.hadoop.mapred.pipes;
import java.io.IOException;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.mapred.InputSplit;
import org.apache.hadoop.mapred.JobConf;
interface DownwardProtocol<K extends WritableComparable, V extends Writable>
