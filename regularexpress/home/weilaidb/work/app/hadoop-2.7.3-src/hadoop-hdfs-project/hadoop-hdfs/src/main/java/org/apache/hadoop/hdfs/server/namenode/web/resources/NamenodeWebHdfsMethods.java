package org.apache.hadoop.hdfs.server.namenode.web.resources;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.net.InetAddress;
import java.net.URI;
import java.net.URISyntaxException;
import java.security.PrivilegedExceptionAction;
import java.util.EnumSet;
import java.util.HashSet;
import java.util.List;
import javax.servlet.ServletContext;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.ws.rs.Consumes;
import javax.ws.rs.DELETE;
import javax.ws.rs.DefaultValue;
import javax.ws.rs.GET;
import javax.ws.rs.POST;
import javax.ws.rs.PUT;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.StreamingOutput;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.ContentSummary;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Options;
import org.apache.hadoop.fs.XAttr;
import org.apache.hadoop.fs.permission.AclStatus;
import org.apache.hadoop.fs.permission.FsAction;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.XAttrHelper;
import org.apache.hadoop.hdfs.protocol.DatanodeInfo;
import org.apache.hadoop.hdfs.protocol.DirectoryListing;
import org.apache.hadoop.hdfs.protocol.HdfsFileStatus;
import org.apache.hadoop.hdfs.protocol.LocatedBlocks;
import org.apache.hadoop.hdfs.security.token.delegation.DelegationTokenIdentifier;
import org.apache.hadoop.hdfs.security.token.delegation.DelegationTokenSecretManager;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockManager;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeDescriptor;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeStorageInfo;
import org.apache.hadoop.hdfs.server.common.JspHelper;
import org.apache.hadoop.hdfs.server.namenode.NameNode;
import org.apache.hadoop.hdfs.server.protocol.NamenodeProtocols;
import org.apache.hadoop.hdfs.web.JsonUtil;
import org.apache.hadoop.hdfs.web.ParamFilter;
import org.apache.hadoop.hdfs.web.SWebHdfsFileSystem;
import org.apache.hadoop.hdfs.web.WebHdfsFileSystem;
import org.apache.hadoop.hdfs.web.resources.*;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.ipc.RetriableException;
import org.apache.hadoop.ipc.Server;
import org.apache.hadoop.net.NetworkTopology.InvalidTopologyException;
import org.apache.hadoop.net.Node;
import org.apache.hadoop.net.NodeBase;
import org.apache.hadoop.security.Credentials;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.util.StringUtils;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Charsets;
import com.google.common.collect.Lists;
import com.sun.jersey.spi.container.ResourceFilters;
@Path("")
@ResourceFilters(ParamFilter.class)
public class NamenodeWebHdfsMethods {
public static final Log LOG = LogFactory.getLog(NamenodeWebHdfsMethods.class);
private static final UriFsPathParam ROOT = new UriFsPathParam("");
private static final ThreadLocal<String> REMOTE_ADDRESS = new ThreadLocal<String>();
public static String getRemoteAddress()
public static InetAddress getRemoteIp()
public static boolean isWebHdfsInvocation()
private @Context ServletContext context;
private @Context HttpServletRequest request;
private @Context HttpServletResponse response;
private void init(final UserGroupInformation ugi,
final DelegationParam delegation,
final UserParam username, final DoAsParam doAsUser,
final UriFsPathParam path, final HttpOpParam<?> op,
final Param<?, ?>... parameters)
private void reset()
private static NamenodeProtocols getRPCServer(NameNode namenode)
throws IOException
@VisibleForTesting
static DatanodeInfo chooseDatanode(final NameNode namenode,
final String path, final HttpOpParam.Op op, final long openOffset,
final long blocksize, final String excludeDatanodes) throws IOException
private static DatanodeInfo bestNode(DatanodeInfo[] nodes,
HashSet<Node> excludes) throws IOException
private Token<? extends TokenIdentifier> generateDelegationToken(
final NameNode namenode, final UserGroupInformation ugi,
final String renewer) throws IOException
private URI redirectURI(final NameNode namenode,
final UserGroupInformation ugi, final DelegationParam delegation,
final UserParam username, final DoAsParam doAsUser,
final String path, final HttpOpParam.Op op, final long openOffset,
final long blocksize, final String excludeDatanodes,
final Param<?, ?>... parameters) throws URISyntaxException, IOException
@PUT
@Path("/")
@Consumes({"*
@PUT
@Path("")
@Consumes({"*
@POST
@Path("/")
@Consumes({"*
@POST
@Path("")
@Consumes(
