package org.apache.hadoop.mapreduce.lib.db;
import java.sql.Connection;
import java.sql.DatabaseMetaData;
import java.sql.Driver;
import java.sql.DriverPropertyInfo;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.SQLFeatureNotSupportedException;
import java.sql.Statement;
import java.util.Properties;
import java.util.logging.Logger;
import static org.mockito.Matchers.any;
import static org.mockito.Mockito.*;
public class DriverForTest implements Driver
