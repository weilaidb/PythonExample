package org.apache.hadoop.lib.service.security;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.lib.server.BaseService;
import org.apache.hadoop.lib.server.ServiceException;
import org.apache.hadoop.lib.service.Groups;
import org.apache.hadoop.lib.util.ConfigurationUtils;
import java.io.IOException;
import java.util.List;
@InterfaceAudience.Private
public class GroupsService extends BaseService implements Groups
