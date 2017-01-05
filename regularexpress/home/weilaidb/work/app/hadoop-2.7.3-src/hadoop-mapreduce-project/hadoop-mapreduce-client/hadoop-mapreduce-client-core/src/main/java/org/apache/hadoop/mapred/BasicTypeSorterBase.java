package org.apache.hadoop.mapred;
import java.io.DataOutputStream;
import java.io.IOException;
import org.apache.hadoop.io.DataOutputBuffer;
import org.apache.hadoop.io.OutputBuffer;
import org.apache.hadoop.io.RawComparator;
import org.apache.hadoop.io.SequenceFile.ValueBytes;
import org.apache.hadoop.util.Progress;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.io.SequenceFile.Sorter.RawKeyValueIterator;
import org.apache.hadoop.util.Progressable;
abstract class BasicTypeSorterBase implements BufferSorter
class MRSortResultIterator implements RawKeyValueIterator
