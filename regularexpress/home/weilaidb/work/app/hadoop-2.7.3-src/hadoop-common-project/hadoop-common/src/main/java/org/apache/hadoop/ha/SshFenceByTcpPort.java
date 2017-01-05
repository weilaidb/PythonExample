package org.apache.hadoop.ha;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.util.Collection;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configured;
import com.google.common.annotations.VisibleForTesting;
import com.jcraft.jsch.ChannelExec;
import com.jcraft.jsch.JSch;
import com.jcraft.jsch.JSchException;
import com.jcraft.jsch.Session;
public class SshFenceByTcpPort extends Configured
implements FenceMethod
