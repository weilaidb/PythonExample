package org.apache.hadoop.fs.http.server;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.lib.service.FileSystemAccess;
import org.apache.hadoop.lib.servlet.FileSystemReleaseFilter;
@InterfaceAudience.Private
public class HttpFSReleaseFilter extends FileSystemReleaseFilter
