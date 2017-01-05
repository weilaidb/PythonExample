package org.apache.hadoop.mapreduce.v2.jobhistory;
import java.io.File;
import java.io.IOException;
import java.util.Calendar;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeysPublic;
import org.apache.hadoop.fs.FileContext;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.PathFilter;
import org.apache.hadoop.fs.RemoteIterator;
import org.apache.hadoop.fs.UnsupportedFileSystemException;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.mapreduce.JobID;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.mapreduce.TypeConverter;
import org.apache.hadoop.mapreduce.v2.api.records.JobId;
import org.apache.hadoop.mapreduce.v2.util.MRApps;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class JobHistoryUtils {
public static final FsPermission HISTORY_STAGING_DIR_PERMISSIONS =
FsPermission.createImmutable( (short) 0700);
public static final FsPermission HISTORY_STAGING_USER_DIR_PERMISSIONS =
FsPermission.createImmutable((short) 0700);
public static final FsPermission HISTORY_DONE_DIR_PERMISSION =
FsPermission.createImmutable((short) 0770);
public static final FsPermission HISTORY_DONE_FILE_PERMISSION =
FsPermission.createImmutable((short) 0770);
public static final FsPermission HISTORY_DONE_DIR_UMASK = FsPermission
.createImmutable((short) (0770 ^ 0777));
public static final FsPermission HISTORY_INTERMEDIATE_DONE_DIR_PERMISSIONS =
FsPermission.createImmutable((short) 01777);
public static final FsPermission HISTORY_INTERMEDIATE_USER_DIR_PERMISSIONS =
FsPermission.createImmutable((short) 0770);
public static final FsPermission HISTORY_INTERMEDIATE_FILE_PERMISSIONS =
FsPermission.createImmutable((short) 0770);
public static final String CONF_FILE_NAME_SUFFIX = "_conf.xml";
public static final String SUMMARY_FILE_NAME_SUFFIX = ".summary";
public static final String JOB_HISTORY_FILE_EXTENSION = ".jhist";
public static final int VERSION = 4;
public static final int SERIAL_NUMBER_DIRECTORY_DIGITS = 6;
public static final String TIMESTAMP_DIR_REGEX = "\\d" + "\\" + Path.SEPARATOR +  "\\d" + "\\" + Path.SEPARATOR + "\\d";
public static final Pattern TIMESTAMP_DIR_PATTERN = Pattern.compile(TIMESTAMP_DIR_REGEX);
private static final String TIMESTAMP_DIR_FORMAT = "%04d" + File.separator + "%02d" + File.separator + "%02d";
private static final Log LOG = LogFactory.getLog(JobHistoryUtils.class);
private static final PathFilter CONF_FILTER = new PathFilter() ;
private static final PathFilter JOB_HISTORY_FILE_FILTER = new PathFilter() ;
public static boolean isValidJobHistoryFileName(String pathString)
public static JobID getJobIDFromHistoryFilePath(String pathString) throws IOException
public static PathFilter getConfFileFilter()
public static PathFilter getHistoryFileFilter()
public static String
getConfiguredHistoryStagingDirPrefix(Configuration conf, String jobId)
throws IOException
public static String getConfiguredHistoryIntermediateDoneDirPrefix(
Configuration conf)
public static String getConfiguredHistoryServerDoneDirPrefix(
Configuration conf)
private static FileContext getDefaultFileContext()
private static String ensurePathInDefaultFileSystem(String sourcePath, Configuration conf)
public static String getHistoryIntermediateDoneDirForUser(Configuration conf) throws IOException
public static boolean shouldCreateNonUserDirectory(Configuration conf)
public static Path getStagingJobHistoryFile(Path dir, JobId jobId, int attempt)
public static Path getStagingJobHistoryFile(Path dir, String jobId, int attempt)
public static String getIntermediateConfFileName(JobId jobId)
public static String getIntermediateSummaryFileName(JobId jobId)
public static Path getStagingConfFile(Path logDir, JobId jobId, int attempt)
public static String serialNumberDirectoryComponent(JobId id, String serialNumberFormat)
public static String getTimestampPartFromPath(String path)
public static String historyLogSubdirectory(JobId id, String timestampComponent, String serialNumberFormat)
public static String timestampDirectoryComponent(long millisecondTime)
public static String doneSubdirsBeforeSerialTail()
public static int jobSerialNumber(JobId id)
public static List<FileStatus> localGlobber(FileContext fc, Path root, String tail)
throws IOException
public static List<FileStatus> localGlobber(FileContext fc, Path root, String tail,
PathFilter filter) throws IOException
public static List<FileStatus> localGlobber(FileContext fc, Path root, String tail,
PathFilter filter, AtomicBoolean hasFlatFiles) throws IOException
