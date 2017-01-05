package org.apache.hadoop.mapred;
import org.apache.hadoop.io.OutputBuffer;
import org.apache.hadoop.io.SequenceFile.Sorter.RawKeyValueIterator;
import org.apache.hadoop.util.Progressable;
interface BufferSorter extends JobConfigurable
