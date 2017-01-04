package com.sleepycat.je.txn;
import java.nio.ByteBuffer;
import javax.transaction.xa.Xid;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.log.Loggable;
import com.sleepycat.je.utilint.DbLsn;
public class TxnPrepare extends TxnEnd implements Loggable
