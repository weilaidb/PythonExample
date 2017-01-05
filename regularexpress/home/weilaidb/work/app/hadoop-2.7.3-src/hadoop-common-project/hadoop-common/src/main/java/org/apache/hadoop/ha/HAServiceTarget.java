package org.apache.hadoop.ha;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.util.Map;
import javax.net.SocketFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeysPublic;
import org.apache.hadoop.ha.protocolPB.HAServiceProtocolClientSideTranslatorPB;
import org.apache.hadoop.ha.protocolPB.ZKFCProtocolClientSideTranslatorPB;
import org.apache.hadoop.net.NetUtils;
import com.google.common.collect.Maps;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public abstract class HAServiceTarget
