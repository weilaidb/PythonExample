package org.apache.hadoop.hdfs.qjournal.client;
import static org.junit.Assert.*;
import java.util.Map;
import java.util.Map.Entry;
import org.apache.hadoop.hdfs.qjournal.protocol.QJournalProtocolProtos.PrepareRecoveryResponseProto;
import org.apache.hadoop.hdfs.qjournal.protocol.QJournalProtocolProtos.SegmentStateProto;
import org.junit.Test;
import org.mockito.Mockito;
import com.google.common.collect.Maps;
import static org.apache.hadoop.hdfs.qjournal.client.SegmentRecoveryComparator.INSTANCE;
public class TestSegmentRecoveryComparator
