package org.apache.hadoop.hdfs.security.token.delegation;
import java.net.URI;
import java.util.Collection;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.server.namenode.NameNode;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.security.SecurityUtil;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.delegation.AbstractDelegationTokenSelector;
@InterfaceAudience.Private
public class DelegationTokenSelector
extends AbstractDelegationTokenSelector<DelegationTokenIdentifier>
