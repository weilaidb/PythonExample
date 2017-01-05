package org.apache.hadoop.tools;
import java.io.IOException;
import java.io.PrintStream;
import java.net.InetSocketAddress;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.util.Tool;
public abstract class GetGroupsBase extends Configured implements Tool
