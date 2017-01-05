package org.apache.hadoop.mapred.join;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.io.WritableComparator;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.mapred.RecordReader;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class WrappedRecordReader<K extends WritableComparable,
U extends Writable>
implements ComposableRecordReader<K,U>, Configurable
