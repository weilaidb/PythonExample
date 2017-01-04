package com.sleepycat.je.txn;
import java.nio.ByteBuffer;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.log.Loggable;
import com.sleepycat.je.utilint.DbLsn;
import com.sleepycat.je.utilint.Timestamp;
public abstract class TxnEnd implements Loggable
