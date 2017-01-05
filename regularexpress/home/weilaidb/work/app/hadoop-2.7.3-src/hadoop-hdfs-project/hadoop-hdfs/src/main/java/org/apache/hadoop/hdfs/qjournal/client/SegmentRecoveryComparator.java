package org.apache.hadoop.hdfs.qjournal.client;
import java.util.Comparator;
import java.util.Map.Entry;
import org.apache.hadoop.hdfs.qjournal.protocol.QJournalProtocolProtos.PrepareRecoveryResponseProto;
import org.apache.hadoop.hdfs.qjournal.protocol.QJournalProtocolProtos.SegmentStateProto;
import com.google.common.base.Preconditions;
import com.google.common.collect.ComparisonChain;
import com.google.common.primitives.Booleans;
class SegmentRecoveryComparator
implements Comparator<Entry<AsyncLogger, PrepareRecoveryResponseProto>>
