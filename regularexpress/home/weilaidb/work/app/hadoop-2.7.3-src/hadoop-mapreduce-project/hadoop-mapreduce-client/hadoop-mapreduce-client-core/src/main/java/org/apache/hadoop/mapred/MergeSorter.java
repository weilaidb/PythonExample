package org.apache.hadoop.mapred;
import java.util.Comparator;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.util.MergeSort;
import org.apache.hadoop.io.SequenceFile.Sorter.RawKeyValueIterator;
class MergeSorter extends BasicTypeSorterBase
implements Comparator<IntWritable>
