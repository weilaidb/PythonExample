package org.apache.hadoop.mapred.gridmix;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.io.DataInputBuffer;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.io.WritableComparator;
import org.apache.hadoop.tools.rumen.ResourceUsageMetrics;
class GridmixKey extends GridmixRecord
