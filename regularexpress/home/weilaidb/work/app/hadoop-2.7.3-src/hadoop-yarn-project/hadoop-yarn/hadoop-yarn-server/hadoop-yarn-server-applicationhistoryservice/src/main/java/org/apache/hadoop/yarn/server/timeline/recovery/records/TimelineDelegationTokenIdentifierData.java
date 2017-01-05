package org.apache.hadoop.yarn.server.timeline.recovery.records;
import org.apache.hadoop.yarn.proto.YarnServerTimelineServerRecoveryProtos.TimelineDelegationTokenIdentifierDataProto;
import org.apache.hadoop.yarn.security.client.TimelineDelegationTokenIdentifier;
import java.io.ByteArrayInputStream;
import java.io.DataInput;
import java.io.DataInputStream;
import java.io.IOException;
public class TimelineDelegationTokenIdentifierData
