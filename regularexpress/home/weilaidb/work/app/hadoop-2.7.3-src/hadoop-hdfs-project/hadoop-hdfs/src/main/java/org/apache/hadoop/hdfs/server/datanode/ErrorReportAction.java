package org.apache.hadoop.hdfs.server.datanode;
import java.io.IOException;
import org.apache.hadoop.hdfs.protocolPB.DatanodeProtocolClientSideTranslatorPB;
import org.apache.hadoop.hdfs.server.protocol.DatanodeRegistration;
import org.apache.hadoop.ipc.RemoteException;
public class ErrorReportAction implements BPServiceActorAction
