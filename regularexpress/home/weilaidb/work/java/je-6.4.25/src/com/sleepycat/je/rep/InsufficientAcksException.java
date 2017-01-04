package com.sleepycat.je.rep;
import com.sleepycat.je.Durability;
import com.sleepycat.je.OperationFailureException;
import com.sleepycat.je.Durability.ReplicaAckPolicy;
import com.sleepycat.je.rep.txn.MasterTxn;
public class InsufficientAcksException extends OperationFailureException
