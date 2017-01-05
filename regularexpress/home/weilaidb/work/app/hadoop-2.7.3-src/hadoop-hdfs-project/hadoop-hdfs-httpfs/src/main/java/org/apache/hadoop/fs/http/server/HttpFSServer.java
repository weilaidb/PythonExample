package org.apache.hadoop.fs.http.server;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.XAttrCodec;
import org.apache.hadoop.fs.XAttrSetFlag;
import org.apache.hadoop.fs.http.client.HttpFSFileSystem;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.AccessTimeParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.AclPermissionParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.BlockSizeParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.DataParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.DestinationParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.FilterParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.GroupParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.LenParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.ModifiedTimeParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.NewLengthParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.OffsetParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.OperationParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.OverwriteParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.OwnerParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.PermissionParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.RecursiveParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.ReplicationParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.SourcesParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.XAttrEncodingParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.XAttrNameParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.XAttrSetFlagParam;
import org.apache.hadoop.fs.http.server.HttpFSParametersProvider.XAttrValueParam;
import org.apache.hadoop.lib.service.FileSystemAccess;
import org.apache.hadoop.lib.service.FileSystemAccessException;
import org.apache.hadoop.lib.service.Groups;
import org.apache.hadoop.lib.service.Instrumentation;
import org.apache.hadoop.lib.servlet.FileSystemReleaseFilter;
import org.apache.hadoop.lib.wsrs.InputStreamEntity;
import org.apache.hadoop.lib.wsrs.Parameters;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.token.delegation.web.HttpUserGroupInformation;
import org.json.simple.JSONObject;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.slf4j.MDC;
import javax.servlet.http.HttpServletRequest;
import javax.ws.rs.Consumes;
import javax.ws.rs.DELETE;
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
import javax.ws.rs.core.UriBuilder;
import javax.ws.rs.core.UriInfo;
import java.io.IOException;
import java.io.InputStream;
import java.net.URI;
import java.security.AccessControlException;
import java.text.MessageFormat;
import java.util.EnumSet;
import java.util.List;
import java.util.Map;
@Path(HttpFSFileSystem.SERVICE_VERSION)
@InterfaceAudience.Private
public class HttpFSServer {
private static Logger AUDIT_LOG = LoggerFactory.getLogger("httpfsaudit");
private <T> T fsExecute(UserGroupInformation ugi, FileSystemAccess.FileSystemExecutor<T> executor)
throws IOException, FileSystemAccessException
private FileSystem createFileSystem(UserGroupInformation ugi)
throws IOException, FileSystemAccessException
private void enforceRootPath(HttpFSFileSystem.Operation op, String path)
@GET
@Produces(MediaType.APPLICATION_JSON)
public Response getRoot(@QueryParam(OperationParam.NAME) OperationParam op,
@Context Parameters params,
@Context HttpServletRequest request)
throws IOException, FileSystemAccessException
private String makeAbsolute(String path)
@GET
@Path("")
@Produces()
public Response get(@PathParam("path") String path,
@QueryParam(OperationParam.NAME) OperationParam op,
@Context Parameters params,
@Context HttpServletRequest request)
throws IOException, FileSystemAccessException
@DELETE
@Path("")
@Produces(MediaType.APPLICATION_JSON)
public Response delete(@PathParam("path") String path,
@QueryParam(OperationParam.NAME) OperationParam op,
@Context Parameters params,
@Context HttpServletRequest request)
throws IOException, FileSystemAccessException
@POST
@Path("")
@Consumes(
