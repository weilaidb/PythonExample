package org.apache.hadoop.ha;
import java.io.IOException;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import static org.apache.hadoop.fs.CommonConfigurationKeys.*;
import org.apache.hadoop.ha.HAServiceProtocol;
import org.apache.hadoop.ha.HAServiceProtocol.HAServiceState;
import org.apache.hadoop.ha.HealthCheckFailedException;
import org.apache.hadoop.ipc.RemoteException;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.util.Daemon;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public class HealthMonitor
