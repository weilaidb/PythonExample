package org.apache.hadoop.hdfs.server.datanode.web.webhdfs;
import org.apache.hadoop.hdfs.security.token.delegation.DelegationTokenIdentifier;
import org.apache.hadoop.hdfs.server.common.JspHelper;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.token.Token;
import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.IOException;
class DataNodeUGIProvider
