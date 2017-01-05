package org.apache.hadoop.lib.service.hadoop;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeysPublic;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.lib.server.BaseService;
import org.apache.hadoop.lib.server.ServiceException;
import org.apache.hadoop.lib.service.FileSystemAccess;
import org.apache.hadoop.lib.service.FileSystemAccessException;
import org.apache.hadoop.lib.service.Instrumentation;
import org.apache.hadoop.lib.service.Scheduler;
import org.apache.hadoop.lib.util.Check;
import org.apache.hadoop.lib.util.ConfigurationUtils;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.util.VersionInfo;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.io.File;
import java.io.IOException;
import java.net.URI;
import java.security.PrivilegedExceptionAction;
import java.util.Collection;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;
@InterfaceAudience.Private
public class FileSystemAccessService extends BaseService implements FileSystemAccess
private Set<String> toLowerCase(Collection<String> collection)
@Override
public Class getInterface()
@Override
public Class[] getServiceDependencies()
protected UserGroupInformation getUGI(String user) throws IOException
protected void setRequiredServiceHadoopConf(Configuration conf)
private static final String HTTPFS_FS_USER = "httpfs.fs.user";
protected FileSystem createFileSystem(Configuration namenodeConf)
throws IOException
protected void closeFileSystem(FileSystem fs) throws IOException
protected void validateNamenode(String namenode) throws FileSystemAccessException
protected void checkNameNodeHealth(FileSystem fileSystem) throws FileSystemAccessException
@Override
public <T> T execute(String user, final Configuration conf, final FileSystemExecutor<T> executor)
throws FileSystemAccessException
public FileSystem createFileSystemInternal(String user, final Configuration conf)
throws IOException, FileSystemAccessException
@Override
public FileSystem createFileSystem(String user, final Configuration conf) throws IOException,
FileSystemAccessException
@Override
public void releaseFileSystem(FileSystem fs) throws IOException
@Override
public Configuration getFileSystemConfiguration()
}
