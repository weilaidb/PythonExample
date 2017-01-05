package org.apache.hadoop.net;
import static org.apache.hadoop.fs.CommonConfigurationKeysPublic.NET_TOPOLOGY_TABLE_MAPPING_FILE_KEY;
import static org.junit.Assert.assertEquals;
import com.google.common.base.Charsets;
import com.google.common.io.Files;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import org.apache.hadoop.conf.Configuration;
import org.junit.Before;
import org.junit.Test;
public class TestTableMapping
