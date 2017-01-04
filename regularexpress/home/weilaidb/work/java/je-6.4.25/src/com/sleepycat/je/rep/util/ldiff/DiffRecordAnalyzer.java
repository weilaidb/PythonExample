package com.sleepycat.je.rep.util.ldiff;
import java.util.List;
import java.util.HashSet;
import com.sleepycat.je.Cursor;
import com.sleepycat.je.Database;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.DbInternal;
import com.sleepycat.je.LockMode;
import com.sleepycat.je.OperationStatus;
import com.sleepycat.je.dbi.CursorImpl;
import com.sleepycat.je.log.LogManager;
import com.sleepycat.je.log.WholeEntry;
import com.sleepycat.je.rep.net.DataChannel;
import com.sleepycat.je.rep.util.ldiff.Protocol.RemoteDiffRequest;
import com.sleepycat.je.rep.utilint.BinaryProtocol.Message;
import com.sleepycat.je.rep.utilint.BinaryProtocol.ProtocolException;
import com.sleepycat.je.utilint.VLSN;
public class DiffRecordAnalyzer
