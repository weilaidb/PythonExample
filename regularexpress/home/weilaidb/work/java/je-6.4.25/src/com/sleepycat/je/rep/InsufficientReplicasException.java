package com.sleepycat.je.rep;
import java.util.Set;
import com.sleepycat.je.Environment;
import com.sleepycat.je.OperationFailureException;
import com.sleepycat.je.Transaction;
import com.sleepycat.je.Durability.ReplicaAckPolicy;
import com.sleepycat.je.txn.Locker;
public class InsufficientReplicasException extends OperationFailureException
