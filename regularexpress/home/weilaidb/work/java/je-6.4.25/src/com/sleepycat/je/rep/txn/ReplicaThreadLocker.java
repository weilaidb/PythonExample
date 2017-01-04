package com.sleepycat.je.rep.txn;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.rep.ReplicaConsistencyException;
import com.sleepycat.je.rep.ReplicaWriteException;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.txn.LockResult;
import com.sleepycat.je.txn.LockType;
import com.sleepycat.je.txn.ThreadLocker;
public class ReplicaThreadLocker extends ThreadLocker
