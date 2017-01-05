package org.apache.hadoop.fs.swift;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.swift.http.RestClientBindings;
import org.apache.hadoop.fs.swift.http.SwiftRestClient;
import org.apache.hadoop.fs.swift.util.SwiftObjectPath;
import org.apache.hadoop.fs.swift.util.SwiftUtils;
import org.junit.Test;
import java.net.URI;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
public class TestSwiftObjectPath implements SwiftTestConstants
