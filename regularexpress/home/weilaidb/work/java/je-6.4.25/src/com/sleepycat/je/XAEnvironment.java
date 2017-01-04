package com.sleepycat.je;
import java.io.File;
import javax.transaction.xa.XAException;
import javax.transaction.xa.XAResource;
import javax.transaction.xa.Xid;
import com.sleepycat.je.txn.PreparedTxn;
import com.sleepycat.je.txn.Txn;
import com.sleepycat.je.txn.TxnManager;
public class XAEnvironment extends Environment implements XAResource
