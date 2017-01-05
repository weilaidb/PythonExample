package org.apache.hadoop.fs.http.server;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeysPublic;
import org.apache.hadoop.lib.server.ServerException;
import org.apache.hadoop.lib.service.FileSystemAccess;
import org.apache.hadoop.lib.servlet.ServerWebApp;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.io.IOException;
@InterfaceAudience.Private
public class HttpFSServerWebApp extends ServerWebApp
