package org.apache.hadoop.yarn.ipc;
import java.io.IOException;
import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.ipc.RemoteException;
import org.apache.hadoop.yarn.exceptions.YarnException;
import com.google.protobuf.ServiceException;
@InterfaceAudience.LimitedPrivate()
public class RPCUtil
