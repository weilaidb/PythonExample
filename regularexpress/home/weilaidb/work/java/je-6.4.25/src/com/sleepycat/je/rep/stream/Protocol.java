package com.sleepycat.je.rep.stream;
import static com.sleepycat.je.rep.utilint.BinaryProtocolStatDefinition.N_ACK_MESSAGES;
import static com.sleepycat.je.rep.utilint.BinaryProtocolStatDefinition.N_GROUPED_ACKS;
import static com.sleepycat.je.rep.utilint.BinaryProtocolStatDefinition.N_GROUP_ACK_MESSAGES;
import static com.sleepycat.je.rep.utilint.BinaryProtocolStatDefinition.N_MAX_GROUPED_ACKS;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.nio.ByteBuffer;
import java.util.Arrays;
import java.util.UUID;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.Durability.SyncPolicy;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.JEVersion;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.rep.NodeType;
import com.sleepycat.je.rep.impl.RepGroupImpl;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.impl.RepNodeImpl;
import com.sleepycat.je.rep.impl.node.NameIdPair;
import com.sleepycat.je.rep.impl.node.RepNode;
import com.sleepycat.je.rep.utilint.BinaryProtocol;
import com.sleepycat.je.rep.utilint.LongMaxZeroStat;
import com.sleepycat.je.rep.utilint.RepUtils.Clock;
import com.sleepycat.je.utilint.LongMaxStat;
import com.sleepycat.je.utilint.LongStat;
import com.sleepycat.je.utilint.VLSN;
public class Protocol extends BinaryProtocol